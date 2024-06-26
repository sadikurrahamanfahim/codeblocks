#include <stdio.h>
#include <stdbool.h>

int findLFU(int frequency[], bool inMemory[], int n) {
    int minFreq = frequency[0], minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (inMemory[i] && frequency[i] < minFreq) {
            minFreq = frequency[i];
            minIndex = i;
        }
    }
    return minIndex;
}

void lfuPageReplacement(int pages[], int n, int capacity) {
    int frames[capacity];
    int frequency[capacity];
    bool inMemory[n];

    for (int i = 0; i < capacity; i++) {
        frames[i] = -1;
        frequency[i] = 0;
    }

    int pageFaults = 0;

    printf("\nPage Replacement Process:\n");

    for (int i = 0; i < n; i++) {
        printf("Page %d:\t", pages[i]);

        if (inMemory[pages[i]]) {
            printf("No Page Fault\n");
            frequency[pages[i]]++;
        } else {
            if (i >= capacity) {
                int lfuIndex = findLFU(frequency, inMemory, capacity);
                inMemory[frames[lfuIndex]] = false;
                frames[lfuIndex] = -1;
            }

            int availableIndex = -1;
            for (int j = 0; j < capacity; j++) {
                if (frames[j] == -1) {
                    availableIndex = j;
                    break;
                }
            }

            if (availableIndex == -1) {
                int lfuIndex = findLFU(frequency, inMemory, capacity);
                availableIndex = lfuIndex;
            }

            frames[availableIndex] = pages[i];
            frequency[pages[i]]++;
            inMemory[pages[i]] = true;
            pageFaults++;
            printf("Page Fault\n");
        }
    }

    printf("\nLFU Page Replacement Algorithm:\n");
    printf("Number of Page Faults: %d\n", pageFaults);
}

int main() {
    int n, capacity;

    printf("Enter the number of pages: ");
    scanf("%d", &n);

    int pages[n];

    printf("Enter the page references:\n");
    for (int i = 0; i < n; i++) {
        printf("Page %d: ", i + 1);
        scanf("%d", &pages[i]);
    }

    printf("Enter Number of frames: ");
    scanf("%d", &capacity);

    lfuPageReplacement(pages, n, capacity);

    return 0;
}
