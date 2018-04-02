/*
Description:  left/right shift in an array

	leftshift - delete i-th element,
	rightshift - insert i-th element

Author:  Liutong Xu
Date: 2016/11/27
*/

#include <stdio.h>
#define SIZE 10
void leftshift(int a[SIZE],int iBegin,int iEnd);
void rightshift(int a[SIZE],int iBegin,int iEnd);
void PrintArray(int a[SIZE]);
int main()
{
	int a[SIZE] = {23,101,42,54,234,58,80,1,201,333};
	int iBegin,iEnd;
	iBegin = 3;
	iEnd = 8;
	//scanf("5d",&k);

	PrintArray(a);
	leftshift(a,iBegin,iEnd);
	PrintArray(a);

	iBegin = 2;
	iEnd = 6;
	rightshift(a,iBegin,iEnd);
	PrintArray(a);
	return 0;
}

void leftshift(int a[SIZE],int iBegin,int iEnd)		//delete a[iBegin]
{
	int i;
	for(i=iBegin;i<iEnd;i++)
		a[i] = a[i + 1];
}

void rightshift(int a[SIZE],int iBegin,int iEnd)	//insert a[iBegin]
{
	int i;
	for(i=iEnd-1;i>=iBegin;i--)
		a[i] = a[i - 1];
	a[iBegin] = 999;
}
void PrintArray(int a[SIZE])
{
	int i;
	for (i=0;i<SIZE;i++)
		printf("%3d\t",a[i]);
	printf("\n");
}