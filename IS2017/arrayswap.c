/*
Description:  swap two elements in an array
	
		
Author:  Liutong Xu
Date: 2016/11/27
*/

#include <stdio.h>
#define SIZE 10
void arrayswap(int a[],int i,int j);
void PrintArray(int a[]);
int main()
{
	int a[SIZE] = {23,101,42,54,234,58,80,1,201,333};
	int i,j;
	i = 3;
	j = 8;
	//scanf("%d%d",&i,&j);
	
	PrintArray(a); 
	arrayswap(a,i,j);
	PrintArray(a);

	return 0;
} 

void arrayswap(int a[],int i,int j)		//delete a[iBegin]
{
	int temp;
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}


void PrintArray(int a[])
{
	int i;
	for (i=0;i<SIZE;i++)
		printf("%3d\t",a[i]);
	printf("\n");
}