/*
Description: Using Brute-force Strategy to Search a Solution
	
	Find the Maximum/Minimum element in an array
	
Author:  Liutong Xu
Date: 2016/10/25
*/

#include <stdio.h>

int main()
{
	int a[10]={12,32,54,1,45,56,87,9,89,90};
	int max;			//for storing the maximum element
	int min;			//for storing the minimum element
	int i;				//for indexing the array
	
	max = a[0];			//set the firat element to be the temporary maximum
	min = a[0];			//set the firat element to be the temporary minimum
	i = 1;				//next one
	
	while (i<10)		//use while to find max
	{
		if (max < a[i])	//means original max is not the Maximum
			max = a[i];	//substitute with new one 
		i++;			//next one
	}	
	printf("The Maximum element in the array is %d.\n",max);
	
	for (i = 1;i < 10;i++)	//use for to find min
		if (min > a[i])	//means original min is not the Minimum
			min = a[i];	//substitute with new one
	printf("The Minimum element in the array is %d.\n",min);
			
	return 0;
} 