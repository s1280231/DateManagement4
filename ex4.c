#include <stdio.h>
#include <stdlib.h>

int main(){
  int num,i,heads = 0, tails = 0;

  printf("Tossing a coin...\n");
  for(i = 0; i < 3; i++){
    num = rand();
    if(num % 2 == 0){
      printf("Round %d: Head\n",i+1);
      head++;
    }
    else{
      printf("Round %d: Tails\n",i+1);
      tail++;
    }
  }
  printf("Heads: %d,Tails: %d\n",heads,tails);
  return 0;
}
