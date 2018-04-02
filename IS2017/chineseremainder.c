/*
Description: Using Brute-force Strategy to Search a Solution
	
	今有物不知其数,三三数之剩二,五五数之剩 三,七七数之剩二,问物几何?
	x = 2 (mod 3)
	x = 3 (mod 5)
	x = 2 (mod 7)
		
Author:  Liutong Xu
Date: 2016/10/25
*/

#include <stdio.h>
#define LIMIT 100
int main()
{
	int x;
	
	x = 1;
	while (!(x % 3 == 2 && x % 5 == 3 && x % 7 == 2))	//while not a solution
		x++;
	printf("x = %d\n",x);
	
	//if you wang to find all solutions 
	//for (x = 1;x < LIMIT;x++)			
	//	if (x % 3 == 2 && x % 5 == 3 && x % 7 == 2)
	//		printf("x = %d\n",x);

	return 0;
} 