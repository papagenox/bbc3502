/*
目的：字符串的删除与插入，要求用函数实现。

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，输入三行，第一行为一字符串str1；第二行为第二个字符串str2，第三行分别为三个正整数：
iPos, dBegin, dLen，要求程序调用插入函数，将字符串str2插入到字符串str1的iPos位置中，
输出结果字符串str1，再调用删除函数，删除字符串str2中第dBegin开始共计dLen个字符，输出结果
字符串str2。输出字符串后，均换行。
注意：
1，要求设计函数来实现两个字符串操作
2，如果删除时，dBegin位于str2末尾后，就不必删除任何字符
3，插入时，如果iPos在str1的末尾后，则直接把str2插入在str1的末尾。
3，字符串长度均不超过80字符；
4，禁止使用string库函数。

输入样例：
Hello, World!
Welcome to Beijing!
6 7 5

输出样例：
WelcomeTOBeijing!
*/

#include<stdio.h>
#include<string.h>
#define LSIZE 81

void strInsert(char str1[],int iPos,char str2[]);
void strDelete(char str1[],int dBegin,int dLen);

int main()
{
	char str1[LSIZE];
	char str2[LSIZE];
	int iPos, dBegin, dLen;
	gets(str1);
	gets(str2);
	scanf("%d%d%d", &iPos, &dBegin, &dLen);

	strInsert(str1, iPos, str2);
	printf("%s\n", str1);

	strDelete(str2, dBegin, dLen);
	printf("%s\n", str2);

	return 0;
}

void strDelete(char str[LSIZE], int dBegin, int dLen)		//delete str[iBegin]
{
	int i;
	int len = 0;
	while(str[len]) len++;					//NOTE

	if(len > dBegin + dLen)					//NOTE
		for(i = dBegin + dLen; i <= len; i++)
			str[i - dLen] = str[i];
	else
		str[dBegin]='\0';
}

void strInsert(char str1[], int iPos,char str2[])	//insert str2 int str1[pos]
{
	int i, i1=0, i2=0;

	while(str2[i2]) i2++;				//length of str2;

	while(str1[i1]) i1++;				//str1[i1] is '\0'

	for(i = i1; i >= iPos; i--)
		str1[i + i2] = str1[i];			//move str1[pos-i1] to a right offset i2
	if (iPos > i1) iPos = i1;			//str1 很短，str2直接接在str1后面
	for(i = 0; i < i2; i++)				//insert str2
		str1[iPos + i] = str2[i];

}