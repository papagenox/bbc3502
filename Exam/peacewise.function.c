/*
目的：分段函数计算。

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，输入一组中英双语国家名（长度不超过20字符），按要求排序并输出。
输入一正整数n（1<n<=100，表示n个地铁站编号），以及n - 1个正整数di（表示地铁站i和i+1之间
的距离，单位公里），两个整数i和j（分别代表两个地铁站编号，i不等于j，0<=i, j<n）。程序计算地铁站i和j
之间的距离，并按下面的票价计算函数计算从地铁站i到j的票价并输出总距离和票价（以一个空格分隔）。

注意：输入的i和j，不一定i < j

f(d)=
3, if d <= 4
4, if d > 4 且 d <= 8
5, if d > 8 且 d <= 16
6, if d > 16 且 d <= 32
7, if d > 32 且 d <= 64
8, if d > 64

输入样例：
5
2 2 2 2
0 3

输出样例：
6 4
*/

#include<stdio.h>
int dis(int dm[], int from, int to);
int main()
{
    int dm[100];
    int d, price;
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n - 1; i++)
        scanf("%d", &dm[i]);
    scanf("%d%d", &i, &j);
    if (i < j)
        d = dis(dm, i, j);
    else
        d = dis(dm, j, i);
    if (d <= 4)
        price = 3;
    else if (d <= 8)
        price = 4;
    else if (d <= 16)
        price = 5;
    else if (d <= 32)
        price = 6;
    else if (d <= 64)
        price = 7;
    else
        price = 8;
    printf("%d %d", d, price);

    return 0;
}

int dis(int dm[], int from, int to)
{
    int i, d = 0;
	for (i = from; i < to; i++)
        d += dm[i];
    return d;
}
