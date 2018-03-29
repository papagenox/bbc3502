/*
目的：学会用printf、利用空格。

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，输出三行，第一和第三行都是两个Hello之间留五个空格，
第二行是五个空格后一个China。

输入样例：
（无）

输出样例：
Hello     Hello
     China
Hello     Hello
*/

#include<stdio.h>
int main()
{
    printf("Hello     Hello\n");
    printf("     China\n");
    printf("Hello     Hello");

    return 0;
}