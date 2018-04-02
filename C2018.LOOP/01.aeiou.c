/*
目的：找出字符串中的元音字母。

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，输入一串字符，程序判断并输出其中的元音字母（a、e、i、o、u）。
如果输入数据中没有元音字母，则无输出。
注意：输入一行字符，数量未知（需要用EOF作为输入结束的判别条件），
最后无换行符。输出其中的元音字母，末尾无换行符。

输入样例：
This is a sentence!

输出样例：
iiaeee
*/

#include<stdio.h>
int main()
{
    char c;
    while (scanf("%c", &c) != EOF)
    {
        switch (c)
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                printf("%c", c);
        }
    }

    return 0;
}