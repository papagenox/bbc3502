/*
目的：大整数加法，利用数组存放大整数。

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，分两行输入两个大整数（每个整数可能带一个正负号，无前导0，至少1位数字，
且不超过100位数字，第二个整数末尾无换行符，），程序计算两个整数之和，并输出其和。
（和为负数时需要输出负号，非负整数不输出正号，前导0不输出。）
建议：用数组存储大整数。
注意：输入的整数有可能是负数。

（这个题做起来有点难度，可以改为两个正整数求和。）

输入样例：
123456789012345678901234567890
234567890123456789012345678901

输出样例：
358024679135802467913580246791
*/

#include<stdio.h>
int main()
{
    char c;
    int a[101], b[101];
    int i, j, k;
    int sa, sb, abig;
    //input integer a[], maybe with a sign
    scanf("%c", &c);
    if (c == '-')
    {
        sa = 0;
        scanf("%c", &c);
    }
    else if (c == '+')
    {
        sa = 1;
        scanf("%c", &c);
    }
    else
        sa = 1;
    i = 0;
    a[0] = 0;
    while (c != '\n')
    {
        i++;
        a[i] = c - '0';
        scanf("%c", &c);
    }
    //i is the length of integer a[]
    //input integer b[], maybe with a sign
    scanf("%c", &c);
    if (c == '-')
    {
        sb = 0;
        scanf("%c", &c);
    }
    else if (c == '+')
    {
        sb = 1;
        scanf("%c", &c);
    }
    else
        sb = 1;
    b[0] = 0;
    j = 1;
    b[j] = c - '0';
    while (scanf("%c", &c) != EOF)
    {
        j++;
        b[j] = c - '0';
    }
    //j is the length of integer b[]

    if (sa == sb)   //均为正整数或均为负整数
    {
        if (i > j)
        {
            for (k = i; k > i - j; k--)
            {
                b[k] = b[k - i + j];
            }
            for (k = 1; k <= i - j; k++)
                b[k] = 0;
        }
        else if (j > i)
        {
            for (k = j; k > j - i; k--)
            {
                a[k] = a[k - j + i];
            }
            for (k = 1; k <= j - i; k++)
                a[k] = 0;
        }
        for (k = i; k > 0; k--)     //对齐后，求和
        {
            a[k] += b[k];
            a[k-1] += a[k] / 10;
            a[k] %= 10;
        }
        if (sa == 0) printf("-");   //负数打印负号
        k = 0;
        while (a[k] == 0) k++;      //前导0不输出
        while (k <= i) printf("%d", a[k++]);    //输出和
    }
    if (sa != sb)                   //符号不同，做减法
    {
        k = 1;
        while (a[k] == b[k] && k <= i) k++;
        if (k > i)                  // a - b == 0
        {
            printf("0");
            return 0;
        }
        if (a[k] > b[k])
            abig = 1;
        else
            abig = 0;
        if (i > j || (i == j && abig))    //|a| > |b|
        {
            for (k = i; k > i-j; k--)   // a - b
            {
                a[k] -= b[k - i + j];
                if (a[k] < 0)
                {
                    a[k] += 10;
                    a[k - 1] -= 1;
                }
            }
            for (k = i - j; k > 0; k--)
                if (a[k] < 0)
                {
                    a[k] += 10;
                    a[k - 1] -= 1;
                }
            if (sa == 0) printf("-");   //负数打印负号
            k = 0;
            while (a[k] == 0) k++;      //前导0不输出
            while (k <= i) printf("%d", a[k++]);    //输出和
        }
        else                    // |b| > |a|
        {
            for (k = j; k > j - i; k--)   // a - b
            {
                b[k] -= a[k - j + i];
                if (b[k] < 0)
                {
                    b[k] += 10;
                    b[k - 1] -= 1;
                }
            }
            for (k = j - i; k > 0; k--)
                if (b[k] < 0)
                {
                    b[k] += 10;
                    b[k - 1] -= 1;
                }
            if (sb == 0) printf("-");   //负数打印负号
            k = 0;
            while (b[k] == 0) k++;      //前导0不输出
            while (k <= j) printf("%d", b[k++]);    //输出和
        }
    }
    return 0;
}