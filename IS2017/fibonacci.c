/*
Description: 
	Fibonacci number
			
Author:  Liutong Xu
Date: 2016/11/20
*/

#include<stdio.h>

int fib(int n);

int main()
{
	int n;
	scanf("%d",&n);
	
	printf("The %dth Fibonacci number is %d\n",n,fib(n));

	return 0;
}

int fib(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else 
		return fib(n-1) + fib(n-2);
}    
