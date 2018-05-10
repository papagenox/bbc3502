/*
目的：将字符串转换为整数。

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，输入一行字符串str，如果是合法的整数，则转换成整数输出，否则无输出。
所谓合法的整数，即可能有一个正负号，一串数字串。任何其他字符的出现均为非法，
或者数字长度超过9位亦为非法。

输入样例：
-123

输出样例：
-123
*/

#include<stdio.h>
//#include<stdlib.h>
#define MAXCHARS 81
#define TRUE 1
#define FALSE 0

int main()
{
    char val[MAXCHARS];

    int start = 0;
    int i;
    int valid = TRUE;
    int sign = FALSE;

    gets(val);

    if (val[0] == '\0') valid = FALSE;
    if (val[0] == '-' || val[0] == '+')
    {
        sign = TRUE;
        start = 1;
    }
    if (sign == TRUE && val[1] == '\0') valid = FALSE;

    i = start;
    while (valid == TRUE && val[i] != '\0')
    {
        if (val[i] < '0' || val[i] > '9')
           valid = FALSE;
        i++;
    }
    if (i - sign > 9)
    {
        valid = FALSE;
//        printf("Too many digits...");
    }
    if (valid)
        printf("%d", atoi(val));
    return 0;
}