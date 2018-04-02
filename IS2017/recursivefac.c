/*
Description: 
		Recursive Function Call		
Author:  Liutong Xu
Date: 2016/11/17
*/


#include<stdio.h>
int factorial(int n);

int main()
{
	float im = 5;
	
	printf("\nCalling recursive function factorial of %d\n",im);
	printf("The factorial of %d = %d\n",im,factorial(im));
	
	return 0;
}


int factorial(int n)		//recursive function for calculating factorial of n
{
	static int level=0;		//count for recursive level
	int fac;
	int j;		//for loop count
	level++;
	
	printf("\n");
	for (j=0;j<level;j++) printf("  ");
	printf("n's address is %p, value = %d\n",&n,n);
	for (j=0;j<level;j++) printf("  ");
	printf("level's address is %p, value = %d\n",&level,level);
	
	
	
	
	if (n==0)
	{
		return 1;
	}
	else
	{
		for (j=0;j<level;j++) printf("  ");
		printf("-- calling factorial of %d\n",n-1);		
		
		fac = factorial(n-1);
		
		level--;
		printf("\n");
		for (j=0;j<level;j++) printf("  ");
		printf("-- return from %d\n",n-1);	
		for (j=0;j<level;j++) printf("  ");
		printf("%d! = %d\n",n-1,fac);
		for (j=0;j<level;j++) printf("  ");
		printf("level's address is %p, value = %d\n",&level,level);
		
		return n*fac;
	}
}