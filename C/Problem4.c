#include <stdio.h>

int main() {
  long largestPalindrome;
  for(int i=999; i >= 100; i--){
    for(int j=i; j >= 100; j--){
      int mult = i * j;
      if(mult < largestPalindrome){
        break;
      }
      int reversedInteger = 0;
      int originalInteger = mult;
      while(mult != 0){
        int remainder = mult%10;
        reversedInteger = reversedInteger*10 + remainder;
        mult /= 10;
      }
      if(originalInteger == reversedInteger && originalInteger > largestPalindrome){
        largestPalindrome = originalInteger;
        
      }
    }
  }
  printf("%d", largestPalindrome);
  return 0;
}
