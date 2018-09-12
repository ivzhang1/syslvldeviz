#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Find the largest palindrome made from the product of two 3-digit numbers.

int pow10(int pow){ // Returns 10 raised to the pow-th Power
  int total = 1;
  for(int i = pow; i > 1; i -= 1){
    total *= 10;
  }
  return total;
}

int isPalindrome(int num){ // 1 if TRUE, 0 if FALSE
  int orig = num;
  int new_num = 0;
  int length_num = floor(log10(num)) + 1;
    
  while(length_num > 0){
    int ten_power = pow10(length_num);
    
    new_num += (ten_power * (num%10));
    num /= 10;
    
    length_num -= 1;
    
  }

  if(new_num == orig){
    return 1;
  }
  
  return 0;

  
}


int main(){
  //printf("%d\n", isPalindrome(90109));
  int biggest = 1;
  for(int x = 999; x >= 100; x -= 1){
    for(int y = 999; y >= 100; y -= 1){
      if((x*y) > biggest && isPalindrome(x*y)){
	biggest = x*y;
      }
    }
  }
  printf("%d\n", biggest); //Answer is 906609
  
}
