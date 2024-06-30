#include "time.h"
#include <stdio.h>
#include <stdlib.h>
int main() {
  srand(time(NULL));
  // Guess the number in custom range
  long long inputRange, inputNum, guessedNumber;
  int attempts = 0;
  printf("Enter range, up to how many: ");
  if (scanf("%lld", &inputRange) != 1) {
    printf("Error! Input number!\n");
    return 1;
  }

  guessedNumber = rand() % inputRange;

  printf("You have selected range up to %lld\n", inputRange);
  printf("Lets guess!\n");

  int whileGuess = 0; // False
  while (whileGuess != 1) {
    printf("Enter number: ");

    if (scanf("%lld", &inputNum) != 1) {
      printf("Error! Input number!\n");
      return 1;
    }

    if (inputNum > inputRange) {
      printf("Your num is less than gueesed number! Try again!\n");
      attempts++;
    } else if (inputNum != guessedNumber) {
      printf("You didn't guess! Try again\n");
      attempts++;
    } else if (inputNum == guessedNumber) {
      printf("You win! Attempts expended - %d\n", attempts);
      return 0;
    }
  }
}
