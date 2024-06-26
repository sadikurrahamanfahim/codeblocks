#include <stdio.h>
#define MAX_MEMORY_SIZE 100

typedef struct {
    int startAddress;
    int size;
    int allocated;
} MemoryBlock;


void allocateMemory(MemoryBlock memory[], int numBlocks, int processSize) {
    int i;
    for (i = 0; i < numBlocks; i++) {
        if (!memory[i].allocated && memory[i].size >= processSize) {
            memory[i].allocated = 1;
            printf("Memory allocated for process of size %d starting from address %d\n", processSize, memory[i].startAddress);
            return;
        }
    }

    printf("Memory allocation failed for process of size %d\n", processSize);
}

// Function to display the status of memory blocks
void displayMemoryStatus(MemoryBlock memory[], int numBlocks) {
    int i;
    printf("\nMemory Status:\n");
    for (i = 0; i < numBlocks; i++) {
        printf("Block %d: Start Address = %d, Size = %d, Allocated = %s\n", i+1, memory[i].startAddress, memory[i].size, memory[i].allocated ? "Yes" : "No");
    }
}

int main() {
    MemoryBlock memory[] = {
        {0, 20, 0},
        {20, 30, 0},
        {50, 10, 0},
        {60, 40, 0}
    };

    int numBlocks = sizeof(memory) / sizeof(memory[0]);

    displayMemoryStatus(memory, numBlocks);

    allocateMemory(memory, numBlocks, 25);
    allocateMemory(memory, numBlocks, 15);
    allocateMemory(memory, numBlocks, 35);

    displayMemoryStatus(memory, numBlocks);

    return 0;
}

