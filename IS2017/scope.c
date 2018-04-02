/*
Description: 
	Scope and Extent 
        with Function Call		
Author:  Liutong Xu
Date: 2016/11/17
*/


#include<stdio.h>
int fa(int a, int b);
int fb(int a, int b);
int main()
{
	int imain;
	imain = 10;
	printf("in main: imain = %d\n",imain);
	
	{//block 1
		int v1;
		v1 = 1;
		printf("in block 1: v1 = %d\n",v1);
		printf("in block 1: imain = %d\n",imain);
	}
	{//block 2
		int v2;
		v2 = 2;
		printf("in block 2: v2 = %d\n",v2);
		printf("in block 2: imain = %d\n",imain);	
			
		int v1;
		v1 = 3;
		printf("in block 2: v1 = %d\n",v1);
	}
	//in main()
	int v2;
	v2 = 5;
	printf("in main: v2 = %d\n",v2);
	

//	printf("in main: v3 = %d\n",v3);
//	int v3;
//	v3 = 6;	

//	scope with function call
	int temp;
	temp = fa(imain,v2);
	printf("Function fa returned a value: %d\n",temp);
	
//	printf("\nCalling recursive function factorial of 10\n");
//	printf("The factorial of %d = %d\n",imain,rf(imain));
	
	return 0;
}

int fa(int a, int b)
{
	int va = 16;
	printf("in fa: va = %d\n",va);

	b++;

	//in function call another function
	//in function fa(), called by main(), call function fb()
	fb(a,b);

	return va+a+b;
}

int fb(int a, int b)
{
	int vb = 625;
	//int i = 123;
	printf("in fb: vb = %d\n");

	//print va from function fa
	//printf("in fb: va from function fa = %d\n",va);		//??
	
	return vb+a+b;
}

int rf(int n)		//recursive function for calculating factorial of n
{
	static int level=0;		//count for recursive level
	int fac;
	int j;		//for loop count
	level++;
	
	printf("\n");
	for (j=0;j<level;j++) printf("  ");
	printf("n's value is %d\n",n);
	for (j=0;j<level;j++) printf("  ");
	printf("n's address is %p\n",&n);
	
	if (n==0)
	{
		return 1;
	}
	else
	{
		for (j=0;j<level;j++) printf("  ");
		printf("-- calling factorial of %d\n",n-1);		
		
		fac = rf(n-1);
		
		level--;
		printf("\n");
		for (j=0;j<level;j++) printf("  ");
		printf("-- return from %d\n",n-1);	
		for (j=0;j<level;j++) printf("  ");
		printf("%d! = %d\n",n-1,fac);
		
		return n*fac;
	}
}