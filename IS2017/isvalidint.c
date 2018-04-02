#include<stdio.h>
int main()
{
	int i;
	int total=0;

	while(scanf("%d", &i)!=EOF)
		total = total + i;

	printf("Total = %d\n",total);
	return 0;
}