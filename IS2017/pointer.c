/*Description: 
	pointer 
		
Author:  Liutong Xu
Date: 2016/11/17
*/


#include<stdio.h>

int main()
{
	int imain;
	int *iptr;
	
	imain = 10;
	iptr = &imain;
	
	float fmain;
	float *fptr;
	
	fmain = 10.1234;
	fptr = &fmain;
	
	printf("the address of imain is %p\n",&imain);
	printf("the pointer iptr is %p\n\n",iptr);
	
	printf("in main: imain = %d\n",imain);
	printf("in main: *iptr = %d\n",*iptr);
	
	printf("the size of pointer iptr is %d\n",sizeof(iptr));
	printf("the size of pointer fptr is %d\n",sizeof(fptr));
	
	printf("in main: fmain = %f\n",fmain);
	printf("in main: *fptr = %f\n",*fptr);	
	
//	//what about ...
//	iptr = &fmain;
//	printf("in main: *iptr = %d\n",*iptr);
//	printf("in main: *iptr = %f\n",*iptr);	
	
	
	
	return 0;
}
