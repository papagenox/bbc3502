#include<stdio.h>

int main()
{
	int a;
	int *p=&a+1;		//p point a's neibough
				//some system may cause segmentation fault

	for (*p=0;*p<10;(*p)++)        //*p used as a loop variable
		scanf("%d",&p[10+*p]); //p+10~p+19 used as an integer array

	for (p[0]=0;p[0]<10;p[0]++)    //p[0] is same as *p
		printf("%d\t",p[10+p[0]]);

	return 0;
}