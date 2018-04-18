/*

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，输入两行，一行人名，一行11位电话号码，输出名片，格式如下：
Name: 人名
Tele: 电话号码
注意：如果输入人名第一个字母不是大写，则需要转换成大些字母输出。

输入样例：
xiaozhang
18811118888

输出样例：
Name: Xiaozhang
Tele: 1881118888
*/

#include<stdio.h>
int main()
{
    char c;
    long int phone;
    printf("Name: ");
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z')
        printf("%c", c - 'a' + 'A');
    else
        printf("%c", c);
    scanf("%c", &c);
    while (c != '\n')
    {
        printf("%c", c);
        scanf("%c", &c);
    }
    printf("\nTele: ");
    scanf("%ld", &phone);
    printf("%ld", phone);

    return 0;
}