/*
Description: Using Binary Strategy to Search RECURSIVELY in an array
	
	in case of array elements are sorted in increasing order. 
	that means a[i]<=a[j] whenever i < j
	
Author:  Liutong Xu
Date: 2016/10/26
*/

#include <stdio.h>
#define LIMIT 10
int bsrecursive(int a[],int bottom,int top,int toFind);
int main()
{
	int a[LIMIT] = {1,23,42,54,58,80,101,201,234,333};
	int index;
	int bottom = 0,top = LIMIT;
	int number;
	
	printf("Please input a number to search: ");
	scanf("%d",&number);
	
	index = bsrecursive(a,bottom,top,number);
	if (index == -1)
		printf("The number %d is in not in the array!\n",number);
	else
		printf("Found a[%d] = %d\n",index,number);	
		
	return 0;
} 

int bsrecursive(int a[],int bottom,int top,int toFind)
{
	int mid;

	mid = (bottom + top) / 2;
    if (bottom > top)
       return -1;
    else if (a[mid] == toFind)        //Found?
       return mid;
    else if (a[mid] > toFind)         //Data is greater than toFind, search lower half
       return bsrecursive(a, bottom, mid-1, toFind);
    else                                 //Data is less than toFind, search upper half
       return bsrecursive(a, mid+1, top, toFind);

}