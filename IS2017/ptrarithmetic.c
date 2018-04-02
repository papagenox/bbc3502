/*Description: 
	pointer 
		
Author:  Liutong Xu
Date: 2016/11/17
*/


#include<stdio.h>

int main()
{
	int a[10]={10,21,32,43,54,65,76,87,98,99};
	int*aptr;
	int i;
	
	for (i=0;i<10;i++)
		printf("a[%d] = %d\t address is %p\n",i,a[i],&a[i]);
	printf("\n");
	
	aptr = &a[3];
	
	printf("aptr is %p\n",aptr);
	printf("data pointed by aptr is %d\n\n",*aptr);
	
	printf("aptr+5 is %p\n\n\n",aptr+5);
	
	aptr = &a[0];	
	for (i=0;i<10;i++)
		printf("aptr+%d is %p\n",i,aptr+i);		
	printf("\n");	

	aptr = &a[0];	
	for (i=0;i<10;i++)
		printf("aptr+%d is %d\n",i,*(aptr+i));		
	printf("\n");	

	
	int * bptr;	
	aptr = &a[3];
	bptr = &a[8];	
	printf("the difference of two poiters is %d\n", bptr - aptr);
	
	
	return 0;
}
