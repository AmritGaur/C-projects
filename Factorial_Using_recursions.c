// FACTORIAL USING RECURSION
#include<stdio.h>
#include<stdlib.h>
int fact(int number){
 if(number==0 || number==1){
     return 1;
 }
 else{
     return (number*fact(number-1));
 }
}
int main(){
  int numb;
  printf("Enter the number whose factorial is to be calculated\n");
  scanf("%d",&numb);
  printf("\nThe factorial of %d is %d",numb,fact(numb));
return 0;
}
