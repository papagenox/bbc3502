/*
目的：char，if或switch，输入输出格式。

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，输入整数a、操作符op、和整数b，根据操作符o为“+”、“-”、“*”、“/”、和“%”，
分别做相应的运算并输出算式。比如，输入为“1 + 2”，则计算1和2的和并输出“1 + 2 = 3”。
注意：当操作符o为“/”或“%”，且b为0时，算式无效，此时，程序输出一个单词：Invalid
末尾无换行符。
注意：输入数据之间有一空格分隔。输出操作符和等号前后各一个空格，末尾无换行符。

输入样例：
1 + 2

输出样例：
1 + 2 = 3
*/

#include<stdio.h>
int main()
{
    int a, b;
    char op;

    scanf("%d %c %d", &a, &op, &b);

    switch (op)
    {
        case '+':
            printf("%d + %d = %d", a, b, a + b); break;
        case '-':
            printf("%d - %d = %d", a, b, a - b); break;
        case '*':
            printf("%d * %d = %d", a, b, a * b); break;
        case '/':
            if (b != 0)
                printf("%d / %d = %d", a, b, a / b);
            else
                printf("Invalid");
            break;
        case '%':
            if (b != 0)
                printf("%d %% %d = %d", a, b, a % b);
            else
                printf("Invalid");
            break;
    }

    return 0;
}