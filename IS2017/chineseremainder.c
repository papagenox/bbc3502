/*
Description: Using Brute-force Strategy to Search a Solution
	
	�����ﲻ֪����,������֮ʣ��,������֮ʣ ��,������֮ʣ��,���Ｘ��?
	x = 2 (mod 3)
	x = 3 (mod 5)
	x = 2 (mod 7)
		
Author:  Liutong Xu
Date: 2016/10/25
*/

#include <stdio.h>
#define LIMIT 100
int main()
{
	int x;
	
	x = 1;
	while (!(x % 3 == 2 && x % 5 == 3 && x % 7 == 2))	//while not a solution
		x++;
	printf("x = %d\n",x);
	
	//if you wang to find all solutions 
	//for (x = 1;x < LIMIT;x++)			
	//	if (x % 3 == 2 && x % 5 == 3 && x % 7 == 2)
	//		printf("x = %d\n",x);

	return 0;
} 