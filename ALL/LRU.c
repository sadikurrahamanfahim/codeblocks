#include <stdio.h>
#include <stdbool.h>

int findLRU(int time[], int n) {
    int min = time[0], minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (time[i] < min) {
            min = time[i];
            minIndex = i;
        }
    }
    return minIndex;
}

void lruPageReplacement(int pages[], int n, int capacity) {
    int frames[capacity];
    int time[capacity];

    for (int i = 0; i < capacity; i++) {
        frames[i] = -1;
        time[i] = 0;
    }

    int pageFaults = 0;

    printf("\nPage Replacement Process:\n");

    for (int i = 0; i < n; i++) {
        printf("Page %d:\t", pages[i]);

        bool pageFound = false;
        for (int j = 0; j < capacity; j++) {
            if (frames[j] == pages[i]) {
                time[j] = i;
                pageFound = true;
                printf("No Page Fault\n");
                break;
            }
        }

        if (!pageFound) {
            int lruIndex = findLRU(time, capacity);
            frames[lruIndex] = pages[i];
            time[lruIndex] = i;
            pageFaults++;
            printf("Page Fault\n");
        }
    }

    printf("\nLRU Page Replacement Algorithm:\n");
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

    lruPageReplacement(pages, n, capacity);

    return 0;
}

