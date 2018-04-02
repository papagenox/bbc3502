/*
目的：if，输入输出格式。

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，输入一组5个整数，并按下列要求依次输出。
注意：输入一行5个整数，以空格分隔，最后无换行符。输出的整数每个数一行，
正整数输出左对齐、不带符号，负整数输出右对齐、占位10个字符位，0跳过不
输出，最后一行无换行符。

输入样例：
1 2 -3 -4 5

输出样例：
1
2
        -3
        -4
5
*/

#include<stdio.h>
int main()
{
    int a;

    scanf("%d", &a);
    if (a > 0)
        printf("%d\n", a);
    else if (a < 0)
        printf("%+10d\n", a);
    scanf("%d", &a);
    if (a > 0)
        printf("%d\n", a);
    else if (a < 0)
        printf("%+10d\n", a);
    scanf("%d", &a);
    if (a > 0)
        printf("%d\n", a);
    else if (a < 0)
        printf("%+10d\n", a);
    scanf("%d", &a);
    if (a > 0)
        printf("%d\n", a);
    else if (a < 0)
        printf("%+10d\n", a);
    scanf("%d", &a);
    if (a > 0)
        printf("%d\n", a);
    else if (a < 0)
        printf("%+10d\n", a);

    return 0;
}