#include <stdio.h>

int main(void) {
  printf("Hello World\n");
  int first = 1;
  int second = 2;
  int sum = 2;
  int tmp = 0;
  while(second <= 4000000){
    tmp = first + second;
    first = second;
    second = tmp;
    if(second % 2 == 0){
      sum += second;
    }
  }
  printf("%d", sum);
  return 0;
}
