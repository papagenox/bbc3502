/*
目的：二维数组应用，禁止使用可变长数组。

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，输入两行数据，第一行一个整数n，1<=n<=10，第二行nXn个整数（以空格分隔），
即nXn的二维整数数组。每一行都有一个最小值，而n行最小值中有一个最大的，
程序找出这个最大的最小值，并在一行输出该整数及行和列的下标（分别以一个空格分隔）。
（如果某行的最小值出现多次，则要求记录列下标最小的那个，如果最大的最小值出现多次，
则要求记录下标最小的那行）。

(这个题目描述得够清楚吗？)

输入样例：
3
1 2 3 4 5 6 7 8 9

输出样例：
9 2 0
*/

#include<stdio.h>
int main()
{
    int num[10][10];
    int n;
    int i, j, jmin, iminmax, jminmax;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            scanf("%d", &num[i][j]);
        }
    iminmax = jminmax = 0;
    for (i = 0; i < n; i++)
    {
        jmin = 0;
        for (j = 0; j < n; j++)
        {
            if (num[i][j] < num[i][jmin])
            {
                jmin = j;
            }
        }
        if (i == 0 || (num[i][jmin] > num[iminmax][jminmax]))
        {
            iminmax = i;
            jminmax = jmin;
        }
    }
    printf("%d %d %d",num[iminmax][jminmax], iminmax, jminmax);

    return 0;
}
