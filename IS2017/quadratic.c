/*
Description: Using Brute-force Strategy to Search a Solution
	
	Finding integer root of an equation: ax^2+bx+c=0
	
Author:  Liutong Xu
Date: 2016/10/25
*/

#include <stdio.h>

int main()
{
	int a,b,c;
	int r;			//possible root
	a = 1;
	b = 5;
	c = -6;
	//scanf("%d%d%d",&a,&b,&c);
	
	for (r = -100; r <= 100; r++)
		if (a * r * r + b * r + c == 0)
			printf("%d is an integer root.\n",r);
	
	return 0;
} 