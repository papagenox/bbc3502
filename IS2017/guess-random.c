/*
Description: Using Brute-force Strategy to Search a Solution
	
	guess number randomly ...
	
Author:  Liutong Xu
Date: 2016/10/25
*/

#include <stdio.h>
#include <stdlib.h>
#define LIMIT 100
int main()
{
	int n;
	char a,b;
	printf("Please select an integer between 1 and %d, and I will guess it.\n",LIMIT);

	srandom(time(NULL));	
	do {
		n = random() % 101;
		printf("The number is %d, Yes or No?, Please input y or n.\n",n);
		scanf("%c%c",&a,&b);		
	}while (a != 'y'); 
	printf("Bingo!\n");
		
	return 0;
} 