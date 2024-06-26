#include <stdio.h>
#include <limits.h>

void printMemoryBlocks(int memoryBlocks[], int numBlocks) {
  for (int i = 0; i < numBlocks; i++) {
    printf("Block %d: %d\n", i, memoryBlocks[i]);
  }
}

int findBestFit(int memoryBlocks[], int numBlocks, int processSize) {
  int bestFitBlock = -1;
  int bestFitSize = INT_MAX;

  for (int i = 0; i < numBlocks; i++) {
    if (memoryBlocks[i] >= processSize && memoryBlocks[i] < bestFitSize) {
      bestFitBlock = i;
      bestFitSize = memoryBlocks[i];
    }
  }

  return bestFitBlock;
}

void allocateMemory(int memoryBlocks[], int numBlocks, int processSize) {
  int bestFitBlock = findBestFit(memoryBlocks, numBlocks, processSize);

  if (bestFitBlock != -1) {
    memoryBlocks[bestFitBlock] -= processSize;
  } else {
    printf("No memory available for process.\n");
  }
}

int main() {

  int numBlocks;
  printf("Enter the number of memory blocks: ");
  scanf("%d", &numBlocks);


  int memoryBlocks[numBlocks];

  for (int i = 0; i < numBlocks; i++) {
    memoryBlocks[i] = INT_MAX;
  }

  int numProcesses;
  printf("Enter the number of processes: ");
  scanf("%d", &numProcesses);

  for (int i = 0; i < numProcesses; i++) {
    int processSize;
    printf("Enter the size of process %d: ", i + 1);
    scanf("%d", &processSize);

    allocateMemory(memoryBlocks, numBlocks, processSize);
  }

  printMemoryBlocks(memoryBlocks, numBlocks);

  return 0;
}
