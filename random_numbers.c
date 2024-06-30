#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int randomNumber;
  // time_t t = time(NULL); NOTE: Use srand(time(NULL)) instead
  srand(time(NULL));
  randomNumber = rand();

  printf("Random number =\t%d\ncall rand() =\t%d\n", randomNumber, rand());
}
