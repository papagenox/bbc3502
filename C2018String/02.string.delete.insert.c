/*
目的：字符串的删除与插入。

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，输入三行，第一行为一字符串str1；第二行两个正整数p1，len，表示从str1的p1开始
删除len个字符；第三行，一个正整数p2（后面无空格），一个字符串str2，表示在str1的p位置开始，插入
字符串str2。程序最后输出str1。
注意：1，如果删除时，p1位于str1末尾后，就不必删除任何字符；或者从p1开始str1后面的字符
数不足len，则删除到str1的末尾为止。删除时，需要把后面的字符往前移动！
2，插入时，如果p2在str1的末尾后，则直接把str2插入在str1的末尾。
3，字符串长度均不超过80字符；
4，禁止使用string库函数。

输入样例：
Welcome to Beijing!
7 4
7TO

输出样例：
WelcomeTOBeijing!
*/

#include<stdio.h>
#define LSIZE 81

int main()
{
	char str1[LSIZE];
	char str2[LSIZE];
	int p1, p2, len;
	int length1, length2;
	int i;

    gets(str1);
    scanf("%d%d", &p1, &len);
    scanf("%d", &p2);
    gets(str2);

	length1 = 0;
	length2 = 0;
	while(str1[length1]) length1++;  //length of str1

	if(length1 > p1 + len)			//字符串左移
		for(i = p1; i <= length1 - len; i++)
			str1[i] = str1[i + len];
	else
		str1[p1]='\0';

	while(str2[length2]) length2++;	//length of str2;

	while(str1[length1]) length1++;	//str1[length1] is '\0'

	for(i = length1; i >= p2; i--)
		str1[i + length2] = str1[i];//move str1[p2~length1] to a right offset length2

	for(i=0; i < length2; i++)		//insert str2
		str1[p2 + i] = str2[i];

	printf("%s", str1);

    return 0;
}