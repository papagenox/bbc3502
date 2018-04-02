/*
Description: Using Iteration to do a right shift in an array
	
	delete the first element, or delete k-th element
	
Author:  Liutong Xu
Date: 2016/10/26
*/

#include <stdio.h>
#define LIMIT 10
int main()
{
	int a[LIMIT] = {23,101,42,54,234,58,80,1,201,333};
	int i;
	int k = 3;
	//scanf("5d",&k);
	
	for (i = 0;i < LIMIT; i++)
		printf("%d\t",a[i]);
	printf("\n");
	
	for (i = k;i < LIMIT - 1; i++)
		a[i] = a[i + 1];
	a[LIMIT - 1] = 0;
	
	for (i = 0;i < LIMIT; i++)
		printf("%d\t",a[i]);
	printf("\n");	
		
	return 0;
} 