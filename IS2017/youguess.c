/*
Description: Using Binary Strategy to Search a Solution
	
	you guess a number, binary ...
	
Author:  Liutong Xu
Date: 2016/10/26
*/

#include <stdio.h>
#include <stdlib.h>
#define LIMIT 100
int main()
{
	int secret,guess;
	int count = 0;

	srandom(time(NULL));
	secret = random() % LIMIT + 1;
	printf("I have a secret integer number between 1 and %d.\nPlease try a guess: ",LIMIT);
	scanf("%d",&guess);
	count ++;

	while (guess != secret)
	{
		if (guess > secret)
			printf("It's bigger. Try again: ");
		else 
			printf("It's smaller. Try again: ");
		scanf("%d",&guess);	
		count ++;	
	} 
	printf("Bingo! %d guess reaches the goal!\n",count);
		
	return 0;
} 