/*Description: 
	ref-deref
		
Author:  Liutong Xu
Date: 2016/11/17
*/


#include<stdio.h>

int main()
{
	int i,j;
	i = 10;
	j = 20;
	printf("i = %d\n",i);
	printf("j = %d\n\n",j);	
	
	int *p1,*p2;	

	p1 = &i;	//now, i and *p1 is equivalence
	p2 = &j;	//now, j and *p2 is equivalence	
	
	printf("p1 points to value %d\n",*p1);
	printf("p2 points to value %d\n\n",*p2);	
	
	*p1 = 110;
	printf("i = %d\n",i);
	printf("p1 points to value %d\n",*p1);
	
//	*p1 = *p2;		//same as i = j; 
//	printf("i = %d\n",i);
//	printf("p1 points to value %d\n",*p1);
	
	p1 = p2;		//same as *p1 = *p2; ???
	printf("i = %d\n",i);
	printf("p1 points to value %d\n",*p1);
	 
	
	//what about?
	&i = p2;
	
	return 0;
}
