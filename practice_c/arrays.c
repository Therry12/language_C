#include <stdio.h>

#define ARR_SIZE 12
#define ARR_END ARR_SIZE - 1

int main() {
  int marks[ARR_SIZE];
  marks[0] = 4;       // First element
  marks[ARR_END] = 5; // Last element

  // Cycle for fill array
  for (int i = 0; i < ARR_SIZE; ++i) { // @NOTE: if we out of array range we got stack overflow!!!
    marks[i] = i * i; // square of number
  }
  // Cycle for print array
  for (int i = 0; i < ARR_SIZE; ++i) {
    printf("element [%d] - %d\n", i, marks[i]);
  }
  // printf("First element = %d\nLast element = %d\n", marks[0],
  // marks[ARR_END]);

  return 0;
}
