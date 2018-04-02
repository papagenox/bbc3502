/*
Description: Solving problem by using sub-problem's solution	
	calculte cos x
	
Author:  Liutong Xu
Date: 2016/11/01
*/

#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	double x, nextterm;
	double cosx;	
	printf("Please input a value for x\n");
	scanf("%lf",&x);
	
	//because cos x == cos (x + 2pi)
	while (x > 6.2831852) x = x - 6.2831852;
	while (x < 0) x = x + 6.2831852;
	
	//initialization
	cosx = 0.0;
    nextterm = 1.0;
	i = 1;	
	while(fabs(nextterm)>=1e-6)	//if the next term is still significant
	{
		cosx = cosx + nextterm;
		nextterm = -nextterm*x*x/i/(i+1);
		i = i + 2;
	}
	printf("cos(x) = %lf\n", cosx);
	
	return 0;
}
