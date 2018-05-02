/*
目的：以螺旋方式给二维数组填充整数，禁止使用可变长数组。

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，输入一个正整数n，1<=n<10。从左上角元素开始，用1到n平方的正整数，
按顺时针螺旋方式填充nXn二维数组，如下图所示（当n=4时）。按行输出所得二维数组。
每个整数占两个字符位置右对齐，两个整数之间用一个空格分隔。行末没有空格，
最后一行没有换行符。

 1  2  3  4
12 13 14  5
11 16 15  6
10  9  8  7

输入样例：
4

输出样例：
 1  2  3  4
12 13 14  5
11 16 15  6
10  9  8  7
*/

#include<stdio.h>
int main()
{
    int a[10][10];
    int n;
    int i, j;
    int num, lastnum, iPos, jPos;
    int right, down, left, up;
    scanf("%d", &n);

    iPos = jPos = 0;
    right = n;
    down = n - 1;
    left = n - 1;
    up = n - 2;

    num = 1;
    lastnum = n * n;
    while (num <= lastnum)
    {
        for (i = 1; i <= right; i++)
        {
            a[iPos][jPos] = num;
            jPos++;
            num++;
        }
        right -= 2;
        jPos--;
        iPos++;
        for (i = 1; i <= down; i++)
        {
            a[iPos][jPos] = num;
            iPos++;
            num++;
        }
        down -= 2;
        iPos--;
        jPos--;
        for (i = 1; i <= left; i++)
        {
            a[iPos][jPos] = num;
            jPos--;
            num++;
        }
        left -= 2;
        jPos++;
        iPos--;
        for (i = 1; i <= up; i++)
        {
            a[iPos][jPos] = num;
            iPos--;
            num++;
        }
        up -= 2;
        iPos++;
        jPos++;
    }

    //输出二维数组
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j > 0) printf(" ");     //每行第一个数字前没有空格
            printf("%2d", a[i][j]);
        }
        if (i < n - 1) printf("\n");    //最后一行末尾没有回车
    }

    return 0;
}