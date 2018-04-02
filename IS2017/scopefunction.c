/*
Description: 
	swap two integers
		
Author:  Liutong Xu
Date: 2016/11/17
*/

#include<stdio.h>
void swap(int a,int b);
int main()
{
	int a = 12;
	int b = 23;
	int temp;
	
	printf("\nin main: a's address is %p, value is %d\n",&a,a);
	printf("in main: b's address is %p, value is %d\n",&b,b);
	
//	temp = a;
//	a = b;
//	b = temp;
	
	swap(a,b); 
	printf("in main: after calling swap:\n");	
	printf("in main: a's address is %p, value is %d\n",&a,a);
	printf("in main: b's address is %p, value is %d\n",&b,b);

	return 0;
}

void swap(int a,int b)
{
	int temp;

	printf("\nin swap: a's address is %p, value is %d\n",&a,a);
	printf("in swap: b's address is %p, value is %d\n",&b,b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("in swap: after swapping:\n");
	printf("in swap: a's address is %p, value is %d\n",&a,a);
	printf("in swap: b's address is %p, value is %d\n\n",&b,b);
	
}
