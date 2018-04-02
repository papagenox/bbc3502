/*
Description: Using Binary Strategy to Search a Solution
	
	guess number binary ...
	
Author:  Liutong Xu
Date: 2017/10/9 
*/

#include <stdio.h>
#include <stdlib.h>
#define LIMIT 100
int main()
{
	int magic_number,bottom = 1,top = LIMIT;
	char answer,enter;
	printf("Please select an integer between 1 and %d (inclusive), and I will guess it.\n\n",LIMIT);

	do {
		magic_number = (top + bottom) / 2;
		printf("Your number is bigger, equal, smaller than %d? \
		\nPlease input 'b','e','s' respectively.\n",magic_number);
		scanf("%c%c",&answer,&enter);
		if (answer == 'b')
			bottom = magic_number;
		else if (answer == 's')
			top = magic_number;		
	}while (answer != 'e'); 
	printf("Bingo!\n");
		
	return 0;
} 
