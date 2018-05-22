/*
目的：Hanoi塔问题

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
程序输入一正整数n，计算并输出由n片盘组成的汉诺塔的移动过程。

汉诺塔是根据一个传说形成的数学问题：
有三根杆子A，B，C。A杆上有N个(N>1)穿孔圆盘，盘的尺寸由下到上依次变小。
要求按下列规则将所有圆盘移至C杆：
1，每次只能移动一个圆盘；
2，大盘不能叠在小盘上面。
提示：可将圆盘临时置于B杆，也可将从A杆移出的圆盘重新移回A杆，但都必须遵循上述两条规则。

输入样例：
3

输出样例：
A -> C
A -> B
C -> B
A -> C
B -> A
B -> C
A -> C
*/
#include<stdio.h>

void hanoi(int n, char from, char to, char temp);
int main()
{
	int n;
	char from = 'A';
	char to = 'C';
	char temp ='B';

	scanf("%d", &n);
	if (n > 0)
		hanoi(n, from, to, temp);

	return 0;
}

void hanoi(int n, char from, char to, char temp)
{
	if (n == 1)
		printf("%c -> %c\n", from, to);
	else
	{
		hanoi(n-1, from, temp, to);
		printf("%c -> %c\n", from, to);
		hanoi(n-1, temp, to, from);
	}
}