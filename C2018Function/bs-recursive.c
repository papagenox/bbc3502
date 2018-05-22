/*
目的：在已知排序的数组中采用二分查找方式搜索元素。
给定数组 a[i]<=a[j] 对任意 i < j

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：程序输入三行数据，第一行正整数n(0<n<=10)，第二行已经排序的n个整数，
第三行一个需要寻找的整数x。程序将输入的整数存入数组中，采用二分查找方式查找x
在数组中的位置，如果找到x，则输出x在数组中的下标，否则无输出。
建议：函数调用时，参数包括，数组名、下限、上限、和需要查找的x。
注意：禁止使用全局变量。

输入样例：
10
1 2 3 4 5 6 7 8 9 10
6

输出样例：
5
*/

#include <stdio.h>
#define LIMIT 10
int bsrecursive(int a[],int bottom,int top,int toFind);
int main()
{
	int a[LIMIT];
	int n, x, i, index;
	int bottom, top;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	scanf("%d", &x);

	bottom = 0;
	top = n;
	index = bsrecursive(a,bottom,top,x);
	if (index >= 0)
		printf("%d", index);

	return 0;
}

int bsrecursive(int a[],int bottom,int top,int toFind)
{
	int mid;

	mid = (bottom + top) / 2;
    if (bottom > top)
       return -1;
    else if (a[mid] == toFind)        //Found?
       return mid;
    else if (a[mid] > toFind)         //Data is greater than toFind, search lower half
       return bsrecursive(a, bottom, mid-1, toFind);
    else                                 //Data is less than toFind, search upper half
       return bsrecursive(a, mid+1, top, toFind);

}