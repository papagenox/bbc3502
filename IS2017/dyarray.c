#include<stdio.h>
#include<stdlib.h>
int main()
{
	//int a;
	//int *p=&a+1;
	int *p = malloc(80);			//p points to a 20-byte memory

	for (*p=0; *p<10; (*p)++)			//*p used as a loop variable
		scanf("%d",&p[10+*p]);		//p+10 ~ p+19 used as an integer array

	for (p[0]=0;p[0]<10;p[0]++)		//p[0] is same as *p
		printf("%d ",p[10+p[0]]);
	printf("\n");
	free(p);
	return 0;
}