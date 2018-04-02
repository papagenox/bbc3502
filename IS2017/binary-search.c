/*
Description: Using Binary Strategy to Search in an array
	
	in case of array elements are in increasing order. 
	that means a[i]<=a[j] whenever i < j
	
Author:  Liutong Xu
Date: 2016/10/26
*/

#include <stdio.h>
#define LIMIT 10
int main()
{
	int a[LIMIT] = {1,23,42,54,58,80,101,201,234,333};
	int i;
	int bottom = 0,top = LIMIT;
	int number;
	
	printf("Please input a number to search: ");
	scanf("%d",&number);
	i = (bottom + top) / 2;	
	while (number != a[i] && bottom < top)
	{
		if (number > a[i])
			bottom = i + 1;
		else 
			top = i - 1;
		i = (bottom + top) / 2;
	} 
	if (number == a[i])
		printf("a[%d] = %d!\n",i,number);
	else
		printf("The number %d is in not in the array!\n",number);
		
	return 0;
} 