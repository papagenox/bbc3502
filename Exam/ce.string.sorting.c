/*
目的：双语字符串的排序。

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，输入一组中英双语国家名（长度不超过20字符），按要求排序并输出。
输入一正整数n>1（1<n<=100），以及n行中英对照国家名（以一个空格分隔），最后一个字符'e'或'c'。
根据最后的输入字符'e'或'c'，确定按英文或中文排序并输出，输出每行一对中英文国家名，
每个国家名占25位，左对齐。

注意：
1，字符串大小比较可以调用库函数strcmp(str1, str2)，函数值 <, =, > 0，分别表示str1 <, =, > str2
2，字符串拷贝不能直接用赋值语句，可以使用strcpy函数。

输入样例：
3
中国 China
法国 France
德国 German
c

输出样例：（注意：这里英文国家名后会补齐足够的空格，即英文名总计25个字符长度。）
中国                   China
德国                   German
法国                   France
*/

#include<stdio.h>
#include<string.h>
void strsort(char mstr[100][20], char sstr[100][20], int n);
void swap(char mstr[100][20], char sstr[100][20], int i, int j);
int main()
{
    char cstr[100][20], estr[100][20];
    char ce;
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%s%s", cstr[i], estr[i]);
    scanf("%c", &ce);
    scanf("%c", &ce);
    if (ce == 'c')
        strsort(cstr, estr, n);
    else
        strsort(estr, cstr, n);
    for (i = 0; i < n; i++)
        printf("%-25s%-25s\n", cstr[i], estr[i]);

    return 0;
}

void strsort(char mstr[100][20], char sstr[100][20], int n)
{
    int i, j;
	for (i = 0; i < n; i++)
	    for (j = 0; j < n - 1 - i; j++)
	    {
	        if (strcmp(mstr[j], mstr[j + 1]) > 0)
	            swap(mstr, sstr, j, j + 1);
	    }
}
void swap(char mstr[100][20], char sstr[100][20], int i, int j)
{
    char temp[20];
    strcpy(temp, mstr[i]);
    strcpy(mstr[i], mstr[j]);
    strcpy(mstr[j], temp);
    strcpy(temp, sstr[i]);
    strcpy(sstr[i], sstr[j]);
    strcpy(sstr[j], temp);
}
