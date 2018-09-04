#include <stdio.h>

int main(void) {
  int sumOfSquares = 0, squareOfSums = 0;
  for(int i = 1; i <= 100; i++){
    sumOfSquares += i*i;
    squareOfSums += i;
  }

  squareOfSums = squareOfSums * squareOfSums;

  printf("%d",squareOfSums - sumOfSquares);
  return 0;
}
