/*
Description: Using Brute-force Strategy to Search a Solution
	
	Testing whether a number is a prime
	
Author:  Liutong Xu
Date: 2016/10/25
*/

#include <stdio.h>

int main()
{
	int p=101;
	int i;
	int isprime = 1;		//1 means as if p is a prime, temporary 
	
	//scanf("%d",&p);
	//for (i = 2; i < p; i++)
	//	if (p % i == 0) isprime = 0;
		
	i = 2;
	while (i < p && isprime)
	{
		if (p % i == 0) isprime = 0;
		i++;		
	}

	
	if (isprime)			//isprime == 1 means it is a prime
		printf("%d is a prime.\n",p);
	else
		printf("%d is a not prime.\n",p);		
			
	return 0;
} 