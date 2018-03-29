/*
目的：算术表达式，printf和scanf的格式。

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，依次输入两个整数a和b，两个输入数据之间有一个非空格类字符
分隔。计算两数之和并输出句子：The sum of a and b is c.

输入样例：
12w34

输出样例：
The sum of 12 and 34 is 46.
*/

#include<stdio.h>
int main()
{
    int a, b;
    char c;
    scanf("%d%c%d",&a, &c, &b);
    printf("The sum of %d and %d is %d.", a, b, a + b);

    return 0;
}