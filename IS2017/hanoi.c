/*
Description: 
	Hanoi Tower 
			
Author:  Liutong Xu
Date: 2016/11/20
*/

#include<stdio.h>

void hanoi(int n,char from,char to,char temp);
int main()
{
	int n;
	char from = 'A';
	char to = 'C';
	char temp ='B';
	
	n = 6;
	//scanf("%d",&n);
	
	hanoi(n,from,to,temp);	
	
	return 0;
}

void hanoi(int n,char from,char to,char temp)
{
	if (n == 1)
		printf("move disk from %c to %c\n", from, to);
	else
	{
		hanoi(n-1,from,temp,to);
		printf("move disk from %c to %c\n", from, to);
		hanoi(n-1,temp,to,from);		
	}
}