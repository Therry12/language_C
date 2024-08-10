#include <stdio.h>

int main(void) {
  
  float fahr, celcius;
  int lower, upper, step;

  step = 20;
  lower = 0;
  upper = 300;
  fahr = lower;

  printf("Fahrenheit to celcius!\n");
  //@TODO:Rewrite while to for
  while (fahr <= upper) {
    celcius = (5.0 / 9.0) * (fahr j- 32.0);
    printf("%.1f\t%6.0f\n", celcius, fahr);
    fahr += step;
  }

  return 0;
}