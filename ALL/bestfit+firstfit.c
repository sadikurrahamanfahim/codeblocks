#include <stdio.h>

void bestFit(int blockSize[], int m, int processSize[], int n) {
    int allocation[n], i, j;

    for (i = 0; i < n; i++) {
        int bestIdx = -1;
        for (j = 0; j < m; j++) {
            if (blockSize[j] >= processSize[i]) {
                if (bestIdx == -1 || blockSize[j] < blockSize[bestIdx]) {
                    bestIdx = j;
                }
            }
        }

        if (bestIdx != -1) {
            allocation[i] = bestIdx;
            blockSize[bestIdx] -= processSize[i];
        }
        else {
            allocation[i] = -1;
        }
    }


    printf("----For Best Fit----");
    printf("\nFile No.\tFile Size\tBlock No.\n");
    for (i = 0; i < n; i++) {
        printf("%d\t\t%d\t\t", i + 1, processSize[i]);
        if (allocation[i] != -1) {
            printf("%d\n", allocation[i] + 1);
        }
        else {
            printf("Not Allocated\n");
        }
    }
}

void firstFit(int blockSize[], int m, int processSize[], int n) {
    int allocation[n], i, j;

    for (i = 0; i < n; i++) {
        allocation[i] = -1;
        for (j = 0; j < m; j++) {
            if (blockSize[j] >= processSize[i]) {
                allocation[i] = j;
                blockSize[j] -= processSize[i];
                break;
            }
        }
    }

    printf("----For First Fit----");
    printf("\nFile No.\tFile Size\tBlock No.\n");
    for (i = 0; i < n; i++) {
        printf("%d\t\t%d\t\t", i + 1, processSize[i]);
        if (allocation[i] != -1) {
            printf("%d\n", allocation[i] + 1);
        }
        else {
            printf("Not Allocated\n");
        }
    }
}

int main() {
    int m, n, i;

    printf("Enter the number of memory blocks: ");
    scanf("%d", &m);

    int blockSize[m];

    printf("Enter the sizes of each block:\n");
    for (i = 0; i < m; i++) {
        printf("Block %d: ", i + 1);
        scanf("%d", &blockSize[i]);
    }

    printf("Enter the number of files: ");
    scanf("%d", &n);

    int processSize[n];

    printf("Enter the sizes of each file:\n");
    for (i = 0; i < n; i++) {
        printf("File %d: ", i + 1);
        scanf("%d", &processSize[i]);
    }

    bestFit(blockSize, m, processSize, n);
    firstFit(blockSize, m, processSize, n);

    return 0;
}
