/*
目的：递归函数

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：Collatz conjecture，又称为奇偶归一猜想、3n＋1猜想：是指对于每一个正整数，
如果它是奇数，则对它乘3再加1，如果它是偶数，则对它除以2，如此循环，最终都能够得到1。

程序接受一输入正整数，设计递归函数计算f(n)：
f(n) = n/2 如果n为偶数
f(n) = 3*n+1 如果n为奇数
程序每调用一次，输出计算后的值。如果值不等于1，继续调用函数计算，直到函数值等于1为止。
程序记录调用函数的次数（可以在函数中定义一static变量来记录）。
程序输出的中间结果以一个空格分隔，最后打印输出函数调用的次数，末尾无换行。

输入样例：
10

输出样例：
5 16 8 4 2 1 6
*/

#include<stdio.h>

void collatz(int n);
int main()
{
    int n;

    scanf("%d", &n);
    collatz(n);

    return 0;
}

void collatz(int n)
{
    static int steps = -1;       // Record the number of steps

    steps++;
    if (n == 1)
    {
        //printf("1 ");
        printf("%d", steps);     // print out the steps at the end of process
    }
    else if (n % 2 == 0)                        // in case of even number
    {
        printf("%d ", n / 2);
        collatz(n / 2);
    }
    else                                        // in case of odd number
    {
        printf("%d ", 3 * n + 1);
        collatz(3 * n + 1);
    }
}