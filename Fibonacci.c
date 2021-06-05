#include<stdio.h>


int fibonacci(int m){

  //In case of 0 and 1

  if(m < 2) {
      return m;
  }
  return fibonacci(m-1) + fibonacci(m-2);
}

  
int main(){

   int num;

   printf("Number of terms to print in a Fibonacci series");
   scanf("%d", &num);

   for(int i = 0; i < num; i++) {
       printf(" %d ", fibonacci(i));
   }

    return 0;
}
