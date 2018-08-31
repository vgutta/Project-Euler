#include <stdio.h>

int main(void) {
  int i = 0;
  int sum = 0;
  while(i < 1000){
    if(i % 3 == 0){
      sum += i;  
    } 
    if(i % 5 == 0){
      sum = sum + i;
    } 
    if(i % 15 == 0){
      sum = sum - i;
    }
    i++;
  }
  printf("%d", sum);
  /* Prints 233168 */
  return 0;
}
