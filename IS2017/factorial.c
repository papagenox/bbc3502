/*
Description: Solving problem by using sub-problem's solution
	
	n! - Factorial of n
	
Author:  Liutong Xu
Date: 2016/11/01
*/


#include<stdio.h>
int main()
{
	int n;
	int i,factorial;
	
	n = 10;
	//scanf("%d",&n);
	
	factorial = 1;
	i = 0;
	while (i<n){
		i++;
		factorial = factorial * i;
	}
	
	printf("The factoial of %d is %d.\n",n,factorial);
    return 0;
}