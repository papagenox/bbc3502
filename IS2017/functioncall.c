/*
Description: 
	Parameter passing in Function Call		
Author:  Liutong Xu
Date: 2016/11/17
*/


#include<stdio.h>
int fa(int a, int b);
int fb(int a, int b);
int main()
{
	int im;
	int v2;
	im = 10;
	v2 = 5;
	
	printf("in main: im's address %p, value = %d\n",&im,im);
	printf("in main: v2's address %p, value = %d\n",&v2,v2);

//	scope with function call
	int temp;
	temp = fa(im,v2);
	printf("\nin main: fa returned %d\n",temp);
	
	return 0;
}

int fa(int a, int b)
{
	printf("\nin fa: a's address is %p, value = %d\n",&a,a);
	printf("in fa: b's address is %p, value = %d\n",&b,b);	
	
	int va = 16;
	printf("in fa: va = %d\n",va);

	b++;

	//in function call another function
	//in function fa(), called by main(), call function fb()
	fb(a,b);

	printf("\nin fa: a's address is %p, value = %d\n",&a,a);
	printf("in fa: b's address is %p, value = %d\n",&b,b);	


	return va+a+b;
}

int fb(int a, int b)
{
	printf("\nin fb: a's address is %p, value = %d\n",&a,a);
	printf("in fb: b's address is %p, value = %d\n",&b,b);	

	int vb = 26;
	printf("in fb: vb = %d\n",vb);

	a = 101;
	b = 202;
	printf("\nin fb: a's address is %p, value = %d\n",&a,a);
	printf("in fb: b's address is %p, value = %d\n",&b,b);	


	//print va from function fa
	//printf("in fb: va from function fa = %d\n",va);		//??
	
	return vb+a+b;
}

