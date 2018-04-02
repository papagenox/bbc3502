/*
Description: 
	Address 
		
Author:  Liutong Xu
Date: 2016/11/17
*/


#include<stdio.h>

int main()
{
	int imain;
	imain = 100;
	printf("in main: imain = %d\n",imain);
	printf("in main: The address of imain is %p\n\n",&imain);
	
	{//block 1
		int v1;
		v1 = 1;
		printf("in block 1: v1 = %d\n",v1);
		printf("in block 1: imain = %d\n",imain);
		
		printf("in block 1: The address of v1 is %p\n",&v1);	
		printf("in block 1: The address of imain is %p\n\n",&imain);		
		
	}
	{//block 2
		int v1;
		v1 = 3;
		printf("in block 2: v1 = %d\n",v1);
		printf("in block 2: The address of v1 is %p\n",&v1);	
		
		int v2;
		v2 = 2;
		printf("in block 2: v2 = %d\n",v2);	
		printf("in block 2: The address of v2 is %p\n",&v2);
			
		printf("in block 2: imain = %d\n",imain);	
		printf("in block 2: The address of imain is %p\n\n",&imain);	
			
		
	}
	//in main()
	int v2;
	v2 = 5;
	printf("in main: v2 = %d\n",v2);
	printf("in main: The address of v2 is %p\n",v2);	

//	printf("in main: v3 = %d\n",v3);
//	int v3;
//	v3 = 6;	
	
	return 0;
}
