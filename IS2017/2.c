#include <stdio.h>
#include <math.h>
int main()
{
	double c,pie,p;
	int a,b,d,n;
	printf("Enter terms:");
	scanf("%d",&a);
	printf("Pie=");
	n=1;
	p=0;
	while(n<=a)
	{
		if(n%2==0)
		{
			b=-1;
		}
		else
		{
			b=1;
		}
		pie=(4.0*b)/(2.0*n-1.0);
	}
	d=2*n-1;
	p=p+pie;
	if(n>1&&n<=a)
	{
		if(n%2==0)
		{
			printf("+");
		}
		else

		{
			printf("-");
		}
		printf("4/%d",d);
		n++;
	}
	printf("\n=%f",p);
	return 0;
}