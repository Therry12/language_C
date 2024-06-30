#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));

  int randomNumber, randomNumber1, range;
  double randomNumber2;
  
  // time_t t = time(NULL); NOTE: Use srand(time(NULL)) instead
  range = 25;
  randomNumber = rand() % range; // for range use rand() % range moreover range there will is - 1 value
  randomNumber1 = rand() % range -5 ; // for range with offset use rand() % range - int
  randomNumber2 = (double)rand() / (double)RAND_MAX * range; // Range [0, 1] else use * range for range respectively 
  
  printf("Random number =\t%d\nRandom number1 =\t%d\nRandom number2 =\t%.2f\n",
         randomNumber, randomNumber1, randomNumber2);
}
