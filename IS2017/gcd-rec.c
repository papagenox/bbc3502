/*
Description: 
	GCD 
			
Author:  Liutong Xu
Date: 2016/11/20
*/

#include<stdio.h>

int gcd(int a,int b);
int gcd_recursive(int a,int b);

int main()
{
	int a,b;
	//scanf("%d%d",&a,&b);
	a = 2342;
	b = 678;
	 
	printf("The gcd of %d and %d is %d\n",a,b,gcd(a,b));
	printf("The gcd of %d and %d is %d\n",a,b,gcd_recursive(a,b));
	return 0;
}

int gcd(int a, int b)
{
	int t;
	
	while(b != 0)
	{
		t = b;
		b = a % b;
		a = t;
	}
	return a;
}

int gcd_recursive(int a,int b)
{
	if (b == 0)
		return a;
	else
		return gcd_recursive(b,a % b);
}    
