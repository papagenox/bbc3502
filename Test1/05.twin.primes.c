/*
目的：寻找开区间内的所有孪生素数。

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，输入两个正整数a和b，当a<b时，计算开区间（a,b）中的所有
孪生素数（即差值为2的素数对），输出要求按升序，每行输出一对孪生素数。
当a>=b时，程序没有输出。
注意：输入一行2个整数，中间以空格分隔，最后无换行符。输出的孪生素数每对一行，
两个素数之间用一个空格分隔。最后一行孪生素数后面无换行符。

输入样例：
10 20

输出样例：
11 13
17 19
*/

#include<stdio.h>
int main()
{
    int a, b, p, q, i;
    int isPrime = 0, first = 1;
    scanf("%d%d", &a, &b);
    p = a + 1;
    while (p < b && !isPrime)
    {
        isPrime = 1;
        for (i = 2; isPrime && i < p; i++)
            isPrime = (p % i);
        if (!isPrime)
            p++;
    }
    q = p + 1;
    while (q < b)
    {
        isPrime = 1;
        for (i = 2; isPrime && i < q; i++)
            isPrime = (q % i);
        if (isPrime)
        {   if (q - p == 2)
                {
                    if (!first)
                        printf("\n");
                    printf("%d %d", p, q);
                    first = 0;
                }
            p = q;
        }
        q = q + 1;
    }
    return 0;
}