/*Description:  String Processing
		insert, delete

Author:  Liutong Xu
Date: 2016/12/05
*/

#include<stdio.h>
#include<string.h>
#define LSIZE 81

void strInsert(char str1[],int pos,char str2[]);
void strDelete(char str1[],int iBegin,int iLen);
void myStrCpy(char string1[], char string2[]);

int main()
{
	char str1[LSIZE] = "Welcome Beijing! hjhksdf sdf sdf sdffsdf sdffsdf sdf";
//	char str1[LSIZE] = "Welcome Beijing!";
	char str2[4]="to ";
	int iBegin,iLen;
	//int len;
	//int pos = 8;
	iBegin = 5;
	iLen = 17;

	printf("string1 is %s\n",str1);
	myStrCpy(str1,"Welcome Beijing!");

	printf("string1 is %s\n",str1);
	strInsert(str1,8,str2);
	printf("\nafter inserting str2\n");
	printf("string1 is %s\n",str1);

	strDelete(str1,iBegin,iLen);
	printf("\nafter deleting %d char from position %d\n",iLen,iBegin);
	printf("string1 is %s\n",str1);

	return 0;
}

void strDelete(char str[LSIZE],int iBegin,int iLen)		//delete str[iBegin]
{
	int i;
	int len=0;
	while(str[len]) len++;				//NOTE

	if(len>iBegin+iLen)					//NOTE
		for(i=iBegin;i<=len-iBegin;i++)
			str[i] = str[i + iLen];
	else
		str[iBegin]='\0';
}

void strInsert(char str1[],int pos,char str2[])	//insert a[pos]
{
	//char *s;
	int i,i1=0,i2=0;

	while(str2[i2]) i2++;	//length of str2;

	while(str1[i1]) i1++;	//str1[i1] is '\0'

	for(i=i1;i>=pos;i--)
		str1[i+i2] = str1[i];		//move str1[pos-i1] to a right offset i2

	for(i=0;i<i2;i++)				//insert str2
		str1[pos+i]=str2[i];

}

void myStrCpy(char string1[], char string2[])
{
     int i = 0;
//     while (i<LSIZE) //string2[i] != '\0')
//     {
//           string1[i] = string2[i];
//           i++;
//     }

    while (string2[i])
    {
    	string1[i] = string2[i];
    	i++;
    }
    string1[i] = '\0';
}