#include <stdio.h>

#define ARR_SIZE 12
#define ARR_END ARR_SIZE - 1

int main() {
  int marks[ARR_SIZE] = {0}; // initializer of array, we can use it for zeroing array
  // marks[0] = 4; // First element
  // marks[ARR_END] = 5; // Last element

  // another example

  int cords[] = {12, 54, 99}; // size calculated auto

  for (int i = 0; i < sizeof(cords) / sizeof(*cords);
       ++i) { // calculate array size
    printf("element [%d] - %d\n", i, cords[i]);
  }

  size_t arr_size_b = sizeof(marks); // geting size of array in bytes
  size_t arr_size = arr_size_b / sizeof(*marks); // or use marks[0]
  printf("size in bytes = %zu, normal size = %zu\n", arr_size_b, arr_size);

  // Cycle for fill array
  for (int i = 0; i < ARR_SIZE; ++i) { // NOTE: if we out of array range we got stack overflow
    marks[i] = i * i;                  //  square of number
  }
  // Cycle for print array
  for (int i = 0; i < ARR_SIZE; ++i) {
    printf("element [%d] - %d\n", i, marks[i]);
  }
  printf("First element = %d\nLast element = %d\n", marks[0], marks[ARR_END]);

  return 0;
}
