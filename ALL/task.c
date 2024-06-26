#include <stdio.h>

#define MAX_BLOCKS 100
#define MAX_PROCESSES 100

void firstFit(int blocks[], int m, int processes[], int n) {
    int allocation[MAX_PROCESSES] = {-1}; // To store block allocation information
    int fragmentation[MAX_BLOCKS] = {0}; // To store fragmentation for each block

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (blocks[j] >= processes[i]) {
                allocation[i] = j; // Allocate block j to process i
                fragmentation[j] = blocks[j] - processes[i]; // Calculate fragmentation
                blocks[j] -= processes[i]; // Reduce available block size
                break;
            }
        }
    }

    printf("\nProcess No.\tProcess Size\tBlock No.\tAllocated\tFragmentation\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%d\t\t", i+1, processes[i]);
        if (allocation[i] != -1) {
            printf("%d\t\tYes\t\t%d\n", allocation[i]+1, fragmentation[allocation[i]]);
        } else {
            printf("Not Allocated\t-\n");
        }
    }
}

int main() {
    int blocks[MAX_BLOCKS], processes[MAX_PROCESSES];
    int m, n; // Number of blocks and processes respectively

    printf("Enter the number of Blocks: ");
    scanf("%d", &m);

    // Input block sizes
    for (int i = 0; i < m; i++) {
        printf("Block %d size: ", i+1);
        scanf("%d", &blocks[i]);
    }

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    // Input process sizes
    for (int i = 0; i < n; i++) {
        printf("Enter memory required for process %d: ", i+1);
        scanf("%d", &processes[i]);
    }

    // Call First Fit algorithm
    firstFit(blocks, m, processes, n);

    return 0;
}

