/*

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，输入三个整数作为三角形的三边的值，判断并输出三角形的类型，
及其面积，精确到小数点后两位（面积公式：设p为三边(a+b+c)/2，则面积
S=[p(p-a)(p-b)(p-c)]的平方根）。末尾无换行。
如果输入的三边不能形成三角形，无输出。
三角形类型：
等边三角形：Equilateral triangle
等腰三角形：Isosceles triangle
普通三角形：Ordinary triangle
输出时用首字母表示，E, I, O。

注意，需要在程序开始添加头文件
#include<math.h>
平方根用函数调用：sqrt()

输入样例：
3.5 3.5 3.5

输出样例：
E5.30
*/

#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, p, s;
    scanf("%f%f%f", &a, &b, &c);
    if (a <= 0 || b <= 0 || c <= 0)
        return 1;
    if (a + b <= c || b + c <= a || c + a <= b)
        return 2;
    if (a == b && b == c)
        printf("E");
    else if ((a == b && b != c) || (b == c && c != a) || (c == a && a != b))
        printf("I");
    else
        printf("O");
    p = (a + b + c) / 2;
    s = sqrt((p*(p-a)*(p-b)*(p-c)));
    printf("%.2f", s);

    return 0;
}