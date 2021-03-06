/*
目的：学会用变量声明，表达式，printf和scanf。

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，依次输入一个整数、一个浮点数，两个输入数据之间用“,”分隔。
输出两个数之和（精确到小数后两位）。

输入样例：
12,34.567

输出样例：
46.57
*/

#include<stdio.h>
int main()
{
    int a;
    float f;
    scanf("%d,%f",&a, &f);
    printf("%.2f", a + f);

    return 0;
}