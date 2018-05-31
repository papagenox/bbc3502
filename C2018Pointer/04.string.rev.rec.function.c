/*
目的：用递归函数逆序打印字符串。

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，输入一行字符串str1，调用递归函数逆序打印输出该字符串。
注意：
1，要求设计递归函数来实现
2，输入输出末尾均无换行符
3，字符串长度均不超过80字符
4，禁止使用string库函数。

输入样例：
Welcome to Beijing!

输出样例：
!gnijieB ot emocleW
*/

#include<stdio.h>
#define LSIZE 81

void strRevRec(char *s);
int main()
{
    char str[LSIZE];
    gets(str);
	strRevRec(str);

	return 0;
}

void strRevRec(char *s)
{
	if (*s != '\0')
	{
		strRevRec(s + 1);
		printf("%c", *s);
	}
}
