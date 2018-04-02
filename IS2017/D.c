#include <stdio.h>
#include<stdlib.h>
void function1(int end,int begin,int count1);
void function2(int end,int begin,int count2);
int main()
{
	int end;
	scanf("%d",&end);

	function1(end,0,0);
	function2(end,0,0);

	return 0;
}
void function1(int end,int begin1,int count1)
{
	// char a[15];
	int result1;
	result1=2*begin1+1;

	if(result1>end)
	return;

	count1=count1*10+1;

	if(result1==end)
	{
		printf("%d",count1);
		return;
	}

	function1(end,result1,count1);
	function2(end,result1,count1);

}

void function2(int end,int begin2,int count2)
{
	// char a[15];
	int result2;
	result2=2*begin2+2;

	if(result2>end)
	return;

	count2=count2*10+2;


	if(result2==end)
	{
		printf("%d",count2);
		return;
	}

	function1(end,result2,count2);
	function2(end,result2,count2);

}