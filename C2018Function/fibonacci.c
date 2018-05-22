/*
目的：斐波那契函数，递归实现

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：数学中斐波那契函数的计算方法如下：
fib(0) = 0
fib(1) = 1
fib(n+2) = fib(n + 2) + fib(n + 1)

程序输入整数n，计算并输出fib(n)。

输入样例：
20

输出样例：
6765
*/

#include<stdio.h>

int fib(int n);

int main()
{
	int n;
	scanf("%d",&n);

	printf("%d", fib(n));

	return 0;
}

int fib(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fib(n-1) + fib(n-2);
}
