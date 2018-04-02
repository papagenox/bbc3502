/*
Description: Using Split Strategy to Search in an array
	
	devide an array into two sub-arrays, and search each sub-array
	
Author:  Liutong Xu
Date: 2016/11/20
*/

#include <stdio.h>
#define LIMIT 10
int splitsearch(int a[],int bottom,int top,int number);
int main()
{
	int a[LIMIT] = {58,80,201,1,234,42,54,101,1,333};
	int found;
	int bottom = 0,top = LIMIT;
	int number;
	
//	printf("Please input a number to search: ");
//	scanf("%d",&number);
	number = 1;
	found = splitsearch(a,bottom,top,number); 
	if (!found)
		printf("Not Found!\n");
	printf("Found %d results.\n",found);
	
	
	return 0;
} 

int splitsearch(int a[],int bottom,int top,int number)
{
	int i;
	int found;

	if (bottom == top)
		if (a[top] == number)
		{
			printf("Found a[%d] = %d.\n",top,number);
			return 1; 
		}
		else
			return 0;
	else
		{
			i = (bottom + top) / 2;	
			found = splitsearch(a,bottom,i,number) + splitsearch(a,i+1,top,number);
			//if (found) return 1; else return 0;				
			return found;
		}
}
