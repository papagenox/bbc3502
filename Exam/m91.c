

/*
目的：计算麦卡锡函数 f(x) = if x > 100 then x − 10 else f(f(x + 11))

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

麦卡锡函数定义：
f(x) = if x > 100 then x − 10 else f(f(x + 11))

程序接受一输入正整数n，设计递归函数计算f(n)：
f(n) = n - 10 如果n > 100
f(n) = f(f(n + 11))  否则
程序输出为函数值以及累计调用函数的次数（以一个空格分隔）。
注意：程序记录调用函数的次数（可以在函数f中定义一static变量来记录）。

输入样例：
100

输出样例：
91 3
*/

#include<stdio.h>

int m91(int n, int *step);
int main()
{
    int n, m;
    int step;

    scanf("%d", &n);
    m = m91(n, &step);
    printf("%d %d", m, step);

    return 0;
}

int m91(int n, int *step)
{
    static int steps = 0;       // Record the number of steps

    steps++;

    if (n > 100)
    {
        *step = steps;
        return n - 10;           // print out the steps at the end of process
    }
    else
        return m91(m91(n + 11, step), step);
}