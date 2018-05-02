/*
目的：一维数组应用，禁止使用可变长数组。

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，输入一行10个整数，计算10个整数的和及平均值，同时寻找最大值、最小值，
分四行分别输出和、平均值（精确到小数点后两位）、最大值、最小值。
注意：计算平均值时有类型转换的问题。

输入样例：
1 2 3 4 5 6 7 8 9 10

输出样例：
55
5.50
10
1
*/

#include<stdio.h>
int main()
{
    int num[10];
    int i, min, max, sum;
    float avg;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    sum = min = max = num[0];
    for (i = 1; i < 10; i++)
    {
        sum = sum + num[i];
        if (num[i] > max) max = num[i];
        if (num[i] < min) min = num[i];
    }
    avg = (float) sum / 10;
    printf("%d\n%.2f\n%d\n%d",sum, avg, max, min);

    return 0;
}