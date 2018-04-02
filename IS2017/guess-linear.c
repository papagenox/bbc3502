/*
Description: Using Brute-force Strategy to Search a Solution
	
	guess number, one by one, up to...
	
Author:  Liutong Xu
Date: 2016/10/25
*/

#include <stdio.h>
#define LIMIT 100
int main()
{
	int n;
	char a,b;
	printf("Please select an integer between 1 and %d, and I will guess it.\n",LIMIT);

/*	for (n = 1;n <= LIMIT;n++)
	{
		printf("The number is %d, Yes or No?, Please input y or n.\n",n);
		scanf("%c%c",&a,&b);
		if (a == 'y')
		{
			printf("Bingo!\n");
			n = 100;			
		}
	}
*/
	n = 1;
	do {
		printf("The number is %d, Yes or No?, Please input y or n.\n",n++);
		scanf("%c%c",&a,&b);		
	}while (a != 'y' && n <= LIMIT); 
	if (n <= LIMIT)
		printf("Bingo!\n");
	else
		printf("You are a BAD guy!\n");
		
	return 0;
} 