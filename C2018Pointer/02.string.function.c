/*
目的：字符串的处理，要求用函数实现。

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，用函数实现字符串的四个操作，字符串长度、字符串比较、字符串拼接、字符串拷贝。
输入两行，分别为两个字符串str1和str2。程序调用函数输出两个字符串的长度、两个字符串
比较的结果（str1 < str2, 输出-1，=输出0，>输出1）、将str2拼接到str1的末尾后输出str1、将str2
拷贝到str1输出str1。
1，字符串长度均不超过80字符；
2，禁止使用string库函数。
3，特别注意：字符串函数（尤其是字符串拼接函数）的两个参数，在调用时有可能会
指向同一个字符串，所以，需要在这种情况下是否能正确完成指定的功能。

输入样例：
Hello World!
Welcome to Beijing!

输出样例：
12 19
-1
Hello World!Welcome to Beijing!
Welcome to Beijing!
*/

#include<stdio.h>
#define LSIZE 81
int myStrLen(char s[]);
void myStrCpy(char string1[], char string2[]);
void myStrConcat(char string1[], char string2[]);
int myStrCmp(char string1[], char string2[]);

int main()
{
	char str1[LSIZE];
	char str2[LSIZE];

    gets(str1);
    gets(str2);

	printf("%d %d\n", myStrLen(str1), myStrLen(str2));

	printf("%d\n", myStrCmp(str1, str2));

	myStrConcat(str1, str2);
	printf("%s\n", str1);

	myStrCpy(str1, str2);
	printf("%s\n", str1);

    return 0;
}

int myStrLen(char s[])
{
	int i=0;

	while (s[i]) 	//same as s[i]!='\0'
		i++;
	return i;
}

void myStrCpy(char string1[], char string2[])   //copying string2 to string1
{
    int i = 0;
    while (string2[i])
    {
    	string1[i] = string2[i];
    	i++;
    }
    string1[i] = '\0';
}

void myStrConcat(char string1[], char string2[])
{
	int i;
	int l1 = 0, l2 = 0;

	while(string1[l1]) l1++;
	while(string2[l2]) l2++;
	//这种方式，能保证两个参数可以指向同一个字符串。
	for (i = 0; i < l2; i++)
		string1[l1 + i] = string2[i];

	string1[i+l1] = '\0';
}

int myStrCmp(char string1[], char string2[])
{
	int i=0;
	while (string1[i] && string2[i] && string1[i] == string2[i])
		i++;
	if (string1[i] == string2[i])
		return 0;
	else if (string1[i] < string2[i])
		return -1;
	else
		return 1;
}