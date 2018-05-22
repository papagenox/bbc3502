/*
目的：阶乘函数，递归函数计算

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：数学中阶乘的计算方法如下：
fac(0) = 1
fac(n) = n * fac(n-1)

程序输入一整数n，计算并输出fac(n)。

输入样例：
10

输出样例：
3628800
*/
#include<stdio.h>
int factorial(int n);

int main()
{
	int n;
	scanf("%d", &n);

	printf("%d", factorial(n));

	return 0;
}


int factorial(int n)		//recursive function for calculating factorial of n
{
	int fac;

	if (n==0)
	{
		return 1;
	}
	else
	{
		fac = factorial(n-1);
		return n*fac;
	}
}