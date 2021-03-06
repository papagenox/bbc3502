/*
目的：二次方程求解。

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，输入三个浮点数a(不等于0), b, c，求满足方程ax^2+bx=c的实数解。
输入一行3个浮点数，中间以空格分隔，最后无换行符。
如果无解，则无输出；如果是唯一解输出该解；如果有两个不同的解，
输出两个解，中间以一个空格分隔。每个解精确到小数点后两位。末尾无换行符。

注意，需要在程序开始添加头文件
#include<math.h>
平方根用函数调用：sqrt()

输入样例：
10 30 100

输出样例：
1 3
4 2
7 1
*/

#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c;
    float d;
    scanf("%f%f%f", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        printf("%.2f %.2f", (-b + sqrt(d)) / 2, (-b - sqrt(d)) / 2);
    }
    else if (d == 0)
        printf("%.2f", -b / (2 * a));

    return 0;
}