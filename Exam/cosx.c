/*
目的：计算余弦函数。

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，输入实数x（0<=x<=6.2831853072），利用下面的余弦展开式计算并输出cos(x)。

cos(x) = 1 - x^2/2! + x^4/4! - x^6/6! + ... + (-1)^(2n-1)/(2n)! + ...

注意：为了不丢失精度，不能单独计算分子分母然后相除来得到下一项！
正确的计算方法是利用后一项和前一项的比值再乘上前一项来得到后一项。

精度要求：当下一项的绝对值足够小(小于10的负10次方，程序中用1e-10表示)时，终止累加。
输出时保留小数点后10位，即%.10lf。
需要调用数学函数库math.h中的fabs(x)表示x的绝对值。

输入样例：
1.0

输出样例：
0.5403023059
*/

#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	double x, nextterm;
	double cosx;
	scanf("%lf",&x);

	//because cos x == cos (x + 2pi)
	while (x > 6.2831853072) x = x - 6.2831853072;
	while (x < 0) x = x + 6.2831853072;

	//initialization
	cosx = 0.0;
    nextterm = 1.0;
	i = 1;
	while(fabs(nextterm)>=1e-10)	//if the next term is still significant
	{
		cosx = cosx + nextterm;
		nextterm = -nextterm*x*x/i/(i+1);
		i = i + 2;
	}
	printf("%.10lf", cosx);

	return 0;
}
