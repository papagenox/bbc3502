/*
Description: Solving problem by using sub-problem's solution
	
	Find the summation of an array
	
Author:  Liutong Xu
Date: 2016/11/01
*/


#include<stdio.h>
int main()
{
	int a[10]={12,43,2,45,56,8,10,25,66,9};
	int i,sum;
	
	sum = 0;
	for (i=0;i<10;i++)
		sum = sum + a[i]; 
	
	printf("The summation is %d.\n",sum);
    return 0;
}