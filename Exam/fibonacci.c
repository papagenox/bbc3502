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

程序输入整数n，计算并输出fib(n)以及调用函数的次数。
程序记录调用函数的次数（可以在函数中定义一static变量来记录）。


输入样例：
2

输出样例：（第一个结果是函数值，第二个是函数调用次数，以一个空格分隔。）
1 3
*/

#include<stdio.h>

int fib(int n, int * count);

int main()
{
	int n;
	int count;
	scanf("%d",&n);

	printf("%d %d", fib(n, &count), count);

	return 0;
}

int fib(int n, int * count)
{
	static int counts = 0;
	counts++;
	*count = counts;

	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fib(n-1, count) + fib(n-2, count);
}
