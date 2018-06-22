/*
目的：一组字符串的排序。

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，输入正整数n>1（1<n<=100），以及n个以空格分隔的字符串（每个字符串长度不超过20个字符），
按字典序对这些字符串进行排序并输出。

注意：
1，字符串大小比较可以调用库函数strcmp(str1, str2)，函数值 <, =, > 0，分别表示str1 <, =, > str2
2，字符串拷贝不能直接用赋值语句，可以使用strcpy函数。

输入样例：
3
China America France

输出样例：
America
China
France
*/

#include<stdio.h>
#include<string.h>
void strsort(char str[100][20], int n);
void swap(char str[100][20], int i, int j);
int main()
{
    char str[100][20];
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%s", str[i]);
    strsort(str, n);
    for (i = 0; i < n; i++)
        printf("%s\n", str[i]);

    return 0;
}

void strsort(char str[100][20], int n)
{
    int i, j;
	for (i = 0; i < n; i++)
	    for (j = 0; j < n - 1 - i; j++)
	    {
	        if (strcmp(str[j], str[j + 1]) > 0)
	            swap(str, j, j + 1);
	    }
}
void swap(char str[100][20], int i, int j)
{
    char temp[20];
    strcpy(temp, str[i]);
    strcpy(str[i], str[j]);
    strcpy(str[j], temp);
}
