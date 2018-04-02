/*
Description: Using Binary Strategy to Search a Solution
	
	guess number binary ...
	
Author:  Liutong Xu
Date: 2016/10/25
*/

#include <stdio.h>
#include <stdlib.h>
#define LIMIT 100
int main()
{
	int n;
	int buttom,top;
	char a,b;
	printf("Please select an integer between 1 and %d, and I will guess it.\n",LIMIT);

	buttom = 1;
	top = 100;
	srandom(time(NULL));
	n = (buttom + top) / 2;
	printf("The number is %d, too small, too big, or equal? Please input s, b, e.\n",n);
	scanf("%c%c",&a,&b);
	while (a != 'e')
	{
		if (a == 's')
			buttom = n;
		else 
			top = n;
		n = (buttom + top) / 2;
		printf("The number is %d, too small, too big, or equal? Please input s, b, e.\n",n);
		scanf("%c%c",&a,&b);		
	} 
	printf("Bingo!\n");
		
	return 0;
} 