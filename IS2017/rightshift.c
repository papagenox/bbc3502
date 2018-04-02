/*
Description: Using Iteration to do a right shift in an array
	
	adding an element on front, or inserting at k-th place
	
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
	
	for (i = LIMIT - 1;i > k; i--)
		a[i] = a[i-1];
	a[k] = 1000;
	
	for (i = 0;i < LIMIT; i++)
		printf("%d\t",a[i]);
	printf("\n");	
		
	return 0;
} 