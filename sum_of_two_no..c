/*
 ============================================================================
 Name        : jcw.c
 Author      : me
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main(int argc,char const *argv[]) {
	int a;
	int b;

	printf("Enter number a\n"); /* prints !!!Hello World!!! */
	scanf ("%d", &a);

	printf("Enter number b\n");
	scanf("%d" , &b);

	printf("The sum of two numbers is %d \n", a+b);
	return 0;
}
