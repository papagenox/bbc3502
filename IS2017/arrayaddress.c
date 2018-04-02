/*
Description:  array address


Author:  Liutong Xu
Date: 2016/11/27
*/

#include <stdio.h>
#define SIZE 10
#define R 3
#define C 4
void arrayswap(const int a[R],int i,int j);
void PrintArray(int a[R]);
//debug
int main()
{
	int a[SIZE] = {23,101,42,54,234,58,80,1,201,333};
	//int c[SIZE];
	int b[R][C]={{23,101,42,54},{234,58,80,1},{201,333,12,88}};
	//int b[R][C]={{23,101,42,54},{234,58,80,1},{201,333,12,88}};
	int i,j;
	const m = 10;

	for (i=0;i<SIZE;i++)
		printf("a[%d]'s address = %p\n",i,&a[i]);

	printf("a's value = %p\n\n",a);

	for (i=0;i<R;i++)
		for (j=0;j<C;j++)
			printf("b[%d][%d]'s address = %p\n",i,j,&b[i][j]);

	printf("b's value = %p\n",b);

	for (i=0;i<R;i++)
		printf("b[%d]'s value = %p\n",i,b[i]);

	for (i=0;i<R;i++)
		for (j=0;j<C;j++)
			printf("b[%d][%d]'s value = %d\n",i,j,b[i][j]);
	PrintArray(a);
	arrayswap(a,3,8);

	PrintArray(a);

	return 0;
}



void PrintArray(int a[SIZE])
{
	int i;
	for (i=0;i<SIZE;i++)
		printf("%3d\t",a[i]);
	printf("\n");
}

void arrayswap(const int a[R],int i,int j)
{
	int temp;
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}