/*
Description: Using Brute-force Strategy to Search an Element 
	
	Find an element in an array
	
Author:  Liutong Xu
Date: 2017/10/9
*/

#include <stdio.h>

int main()
{
	int a[10]={12,32,54,1,45,56,87,9,89,90};
	int x;				//an element to search
	int i=0;			//indexing
	int found = 0;		//not found yet
	
	//scanf("%d",&x);
	x = 87;
	while (!found && i<10)		//iteratively searching
	{
		if (a[i] == x)			//testing
			found = 1;			//found
		else
			i++;				//next one
	}	

	if (found)
		printf("Found %d at a[%d].\n",x,i);
	else
		printf("%d not found in array!\n",x);		
	return 0;
} 
