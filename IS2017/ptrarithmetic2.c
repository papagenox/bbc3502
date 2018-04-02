/*Description:
	pointer arithmetic

Author:  Liutong Xu
Date: 2016/11/17
*/


#include<stdio.h>

int main()
{
	int i,j,k,l,m;
	i = 10;
	j = 20;
	k = 30;
	l = 40;
	m = 50;

	int *p1,*p2;
	printf("i's address is %p, the value is %d\n",&i,i);
	printf("j's address is %p, the value is %d\n",&j,j);
	printf("k's address is %p, the value is %d\n",&k,k);
	printf("l's address is %p, the value is %d\n",&l,l);
	printf("m's address is %p, the value is %d\n\n",&m,m);

	p1 = &i;
	p2 = &j;

	printf("p1 points to value %d\n",*p1);
	printf("p2 points to value %d\n\n",*p2);

	printf("p1-1 points to value %d\n",*(p1-1));
	printf("p1-2 points to value %d\n",*(p1-2));
	printf("p1-3 points to value %d\n",*(p1-3));
	printf("p1-4 points to value %d\n",*(p1-4));
	printf("p1-5 points to value %d\n",*(p1-5));

	printf("\np1-5 = %p\n",p1-5);

	return 0;
}
