/*
目的：max, if，输入输出。

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，输入一组5个整数，找出并输出最大值。
注意：输入一行5个整数，中间以空格分隔，最后无换行符。输出一个整数最大值，无换行符。

输入样例：
1 2 6 7 8

输出样例：
8
*/

#include<stdio.h>
int main()
{
    int a, max;

    scanf("%d", &a);
    max = a;
    scanf("%d", &a);    
    if (a > max)
        max = a;
    scanf("%d", &a);    
    if (a > max)
        max = a;
    scanf("%d", &a);    
    if (a > max)
        max = a;
    scanf("%d", &a);    
    if (a > max)
        max = a;
    printf("%d", max);

    return 0;
}