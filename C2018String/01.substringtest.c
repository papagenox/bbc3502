/*
目的：输入两个字符串，判断第二个是否为第一个的子串。

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，输入两行字符串（长度均不超过80字符），程序判断第二个是否为第一个的子串，如是，
输出第二个字符串在第一个字符串的起始位置。否则，无输出。
注意：禁止使用string库函数

输入样例：
Hello, World!
Wo

输出样例：
7
*/

#include<stdio.h>

int main()
{
    char str[81];
    char subs[81];

    int pos = 0, i;
    int len1 = 0, len2 = 0;
    int found = 0;

    gets(str);
    gets(subs);

    while (str[len1]) len1++;
    while (subs[len2]) len2++;
    if (len2 == 0) found = 1;   //empty string is always a substring of any string

    while (!found && len1 - pos >= len2)
    {
        // Locate the first character that equals to the first character of subs
        while (str[pos] != subs[0]) pos++;

        if (len1 - pos >= len2)
        {
            i = 0;
            while (i < len2 && str[pos + i] == subs[i])     //Test whether all characters are same?
            {
                i++;
            }
            if (i == len2)      //all characters are same
            {
                found = 1;
            }
            else
                pos++;
        }
    }
    if (found)
        printf("%d\n", pos);

    return 0;
}