#include <stdio.h>

// Define the maximum number of blocks and processes.
#define MAX_BLOCKS 10
#define MAX_PROCESSES 10

// Define the structure for a block of memory.
struct block {
  int start;
  int size;
  bool allocated;
};

// Define the structure for a process.
struct process {
  int id;
  int size;
};

// Create an array of blocks.
struct block blocks[MAX_BLOCKS];

// Create an array of processes.
struct process processes[MAX_PROCESSES];

// Initialize the blocks.
void init_blocks() {
  for (int i = 0; i < MAX_BLOCKS; i++) {
    blocks[i].start = i * 100;
    blocks[i].size = 100;
    blocks[i].allocated = false;
  }
}

// Initialize the processes.
void init_processes() {
  for (int i = 0; i < MAX_PROCESSES; i++) {
    processes[i].id = i;
    processes[i].size = i * 10;
  }
}

// Find the first block that is large enough to hold the process.
int find_block(int size) {
  for (int i = 0; i < MAX_BLOCKS; i++) {
    if (!blocks[i].allocated && blocks[i].size >= size) {
      return i;
    }
  }

  return -1;
}

// Allocate a block of memory to the process.
void allocate_block(int block_index, int process_id) {
  blocks[block_index].allocated = true;
  blocks[block_index].process_id = process_id;
}

// Free a block of memory.
void free_block(int block_index) {
  blocks[block_index].allocated = false;
  blocks[block_index].process_id = -1;
}

// Print the status of the memory.
void print_status() {
  printf("Memory status:\n");

  for (int i = 0; i < MAX_BLOCKS; i++) {
    printf("Block %d: start = %d, size = %d, allocated = %d\n",
           i, blocks[i].start, blocks[i].size, blocks[i].allocated);
  }

  printf("\n");
}

int main() {
  // Initialize the blocks and processes.
  init_blocks();
  init_processes();

  // Print the initial status of the memory.
  print_status();

  // Allocate blocks to the processes.
  for (int i = 0; i < MAX_PROCESSES; i++) {
    int block_index = find_block(processes[i].size);
    if (block_index != -1) {
      allocate_block(block_index, processes[i].id);
    } else {
      printf("Error: could not allocate block for process %d\n", i);
      return 1;
    }
  }

  // Print the final status of the memory.
  print_status();

  return 0;
}
