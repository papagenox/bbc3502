/*
Description: 
	swap two integers, by value???
		
Author:  Liutong Xu
Date: 2016/11/17
*/

#include<stdio.h>
void swap(int *ap,int *bp);
int main()
{
	int a = 12;
	int b = 23;
	
	printf("\nin main: a's address is %p, value is %d\n",&a,a);
	printf("in main: b's address is %p, value is %d\n",&b,b);
		
	swap(&a,&b); 
	
	printf("\nin main: after calling swap:\n");	
	printf("in main: a's address is %p, value is %d\n",&a,a);
	printf("in main: b's address is %p, value is %d\n",&b,b);

	return 0;
}

void swap(int *ap,int *bp)
{
	int temp;
	printf("\nin swap: ap's address is %p, points to %p, value is %d\n",&ap,ap,*ap);
	printf("in swap: bp's address is %p, points to %p, value is %d\n",&bp,bp,*bp);
	
	temp = *ap;
	*ap = *bp;
	*bp = temp;
	
	printf("in swap: after swapping:\n");
	printf("in swap: ap's address is %p, points to %p, value is %d\n",&ap,ap,*ap);
	printf("in swap: bp's address is %p, points to %p, value is %d\n",&bp,bp,*bp);
	
}
