/*
目的：if，letter、digit、other，输入输出。

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，输入一个字符，判断字符类型：字母、数字、其他，并输出
letter、digit、other。

输入样例：
a

输出样例：
letter
*/

#include<stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    if (c >= '0' && c <= '9')
        printf("digit");
    else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("letter");
    else
        printf("other");

    return 0;
}