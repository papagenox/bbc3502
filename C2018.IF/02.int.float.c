/*
目的：整数、浮点数之间的转换，输入输出。

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，输入一个浮点数，转换成整数并输出。
注意：输入一个浮点数，无换行符。输出一个整数，末尾无换行符。

输入样例：
12.6

输出样例：
12
*/

#include<stdio.h>
int main()
{
    int a;
    float b;

    scanf("%f", &b);
    a = b;
    printf("%d", a);

    return 0;
}