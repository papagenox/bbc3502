/*

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，输入一人名，如：xiaozhang，输出下列样例格式的问候句：
注意：如果输入人名第一个字母不是大写，则需要转换成大些字母输出。
另外，第二行的*需要和第一行的文字对齐。

输入样例：
xiaozhang

输出样例：
Hello, Xiaozhang!
*****************
*/

#include<stdio.h>
int main()
{
    char c;
    int i, num = 0;
    printf("Hello, ");
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z')
        printf("%c", c - 'a' + 'A');
    else
        printf("%c", c);
    while (scanf("%c", &c) != EOF)
    {
        printf("%c", c);
        num++;
    }
    printf("!\n");
    for (i = 1; i <= num + 9; i++)
        printf("*");

    return 0;
}