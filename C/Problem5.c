#include <stdio.h>

int main() {
  int i = 1;
  printf("%d\n", i);
  while((i%2 != 0) || (i%3 != 0) || (i%4 != 0) || (i%5 != 0) || (i%7 != 0) || (i%9 != 0) || (i%11 != 0) || (i%13 != 0) || (i%16 != 0) || (i%17 != 0) || (i%19 != 0) || (i%20 != 0)){
    i++;
  }
  printf("%d", i);
  return 0;
}
