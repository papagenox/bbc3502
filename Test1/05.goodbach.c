/*
目的：寻找开区间内的所有偶数表达为素数之和。

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，输入两个正整数a和b，当a<b时，将开区间（a,b）中的所有偶数表达为
素数之和（列出所有可能，num = p + q, 其中p、q是素数，且p<=q），输出要求
按p的升序，每行输出一个等式。
当a>=b时，程序没有输出。
注意：输入一行2个整数，中间以空格分隔，最后无换行符。输出每行一个等式，
格式为num = p + q，最后一行末尾无换行符。

输入样例：
10 20

输出样例：
11 13
17 19
*/

#include<stdio.h>
int main()
{
    int a, b, num, g, p, q, i;
    int pIsPrime, qIsPrime, first = 1;
    scanf("%d%d", &a, &b);
    num = a + 1;
    if (num % 2 != 0)
        num++;
    for (g = num; g < b; g = g + 2)
    {
        for (p = 2; p <= g / 2; p++)
        {
            pIsPrime = 1;
            for (i = 2; pIsPrime && i < p; i++)
                pIsPrime = (p % i);
            if (pIsPrime)
            {
                q = g - p;
                qIsPrime = 1;
                for (i = 2; qIsPrime && i < q; i++)
                    qIsPrime = (q % i);
                if (qIsPrime)
                {
                    if (!first)
                        printf("\n");
                    printf("%d = %d + %d", g, p, q);
                    first = 0;
                }
            }
        }
    }
    return 0;
}