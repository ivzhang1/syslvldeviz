#include <stdio.h>
#include <stdlib.h>


int main(){
  int total = 0;
  
  for(int i = 1; i < 1000; i++){
    if (i % 3 == 0|| i % 5 == 0){
      total += i;
    }
  }

  if(total == 233168){
    printf("%d\n", total); //returns 233168 | solution is 233168
  }
  else{
    printf("WRONG!\n");
  }
}
