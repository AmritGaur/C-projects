// Calculator using C
 #include <stdio.h>
 #include <stdlib.h>
 int main(){
 printf("WELCOME TO AMRIT'S CALCULATOR\n");
 printf("1.Addition\n");
 printf("2.Subtraction\n");
 printf("3.Multiplication\n");
 printf("4.Division\n");
 printf("5.Exit");
 printf("\nENTER YOUR CHOICE (1-5)\n");
 int i;
 scanf("%d",&i);
 float a;
 float b;
 switch(i)
 {
 case 1:
 printf("Enter A and B for addition\n");
 scanf("%d\t%d",&a,&b);
 printf("%d",a+b);
 break;
 case 2:
 printf("Enter A and B for subtraction\n");
 scanf("%d\t%d",&a,&b);
 printf("%d",a-b);
 break;
 case 3:
 printf("Enter A and B for multiplication\n");
 scanf("%d\t%d",&a,&b);
 printf("%d",a*b);
 break;
 case 4:
 printf("Enter A and B for divsion\n");
 scanf("%f\t%f",&a,&b);
 printf("%f",a/b);
 case 5:
 break;
}


 }
