/*
目的：gcd递归函数

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：数学中最大公因子gcd的计算方法如下：
gcd(a,0) = a
gcd(a,b) = gcd(b,a % b)

程序输入正整数a和b，且a>b。计算并输出gcd(a,b)。

输入样例：
2343 678

输出样例：
3
*/
#include<stdio.h>

int gcd_recursive(int a,int b);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);

	printf("%d", gcd_recursive(a,b));
	return 0;
}

int gcd_recursive(int a,int b)
{
	if (b == 0)
		return a;
	else
		return gcd_recursive(b,a % b);
}
