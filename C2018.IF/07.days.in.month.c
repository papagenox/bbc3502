/*
目的：days in a month，if，leap year，输入输出。

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，输入一个正整数year代表年份，一个正整数month代表月份。
输出year年的month月的天数。
注意：每个月的天数有大小之分，而二月份是否是润月则取决于年份的数值。
注意：输入一行2个整数，中间以空格分隔，最后无换行符。输出一个整数，末尾无换行符。

输入样例：
2018 3

输出样例：
31
*/

#include<stdio.h>
int main()
{
    int year, month, days;
    int leap = 0;
    scanf("%d%d", &year, &month);

    leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 ==0);

    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31; break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30; break;
        case 2:
            days = 28 + leap;
    }
    printf("%d", days);

    return 0;
}