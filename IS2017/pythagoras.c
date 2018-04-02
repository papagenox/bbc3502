/*
Description: Using Brute-force Strategb to Search a Solution
	
	Finding positive solution(<100) to equation: a^2+b^2=c^2
	
Author:  Liutong au
Date: 2016/10/25
*/

#include <stdio.h>
#define LIMIT 20
int main()
{
	int a,b,c;
	
	for (a = 1; a <= LIMIT; a++)
		for (b = a; b <= LIMIT; b++)
			for (c = 1; c <= LIMIT; c++)
				if (a * a + b * b == c * c)
					printf("%d^2 + %d^2 = %d^2\n",a,b,c);
	
	return 0;
} 
