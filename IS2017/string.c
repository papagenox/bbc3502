/*Description:  String processing

Author:  Liutong Xu
Date: 2016/12/05
*/

#include<stdio.h>
#include<string.h>
#define LSIZE 81
int myStrLen(char [LSIZE]);
int myStrCmp(char [LSIZE], char [LSIZE]);
void myStrCpy(char [LSIZE], char [LSIZE]);
void myStrConcat(char [LSIZE], char [LSIZE]);

int main()
{
    char str1[LSIZE];
    char str2[LSIZE];
    char str3[LSIZE];
    int i, cmp;

    printf("Enter string 1: ");
    fgets(str1, LSIZE, stdin);
    for (i = 0; i < LSIZE && str1[i] != '\n'; i++);
    str1[i] = '\0';
    //scanf("%s",str1);

    printf("Enter string 2: ");
    fgets(str2, LSIZE, stdin);
    for (i = 0; i < LSIZE && str2[i] != '\n'; i++);
    str2[i] = '\0';

    //scanf("%s",str2);

    printf("The addresses of str1 and str2 and str3 are %p and %p and %p\n\n",str1,str2,str3);

    printf("string1 is %s\n",str1);
    printf("The length of String1 = %d\n",myStrLen(str1));
    printf("string2 is %s\n",str2);
    printf("The length of String2 = %d\n",myStrLen(str2));

	printf("string3 is %s\n",str3);
    printf("The length of String3 = %d\n",myStrLen(str3));

	cmp = myStrCmp(str1,str2);
	if (cmp == -1)
		printf("String1 < String2\n");
	else if (cmp == 0)
		printf("String1 = String2\n");
	else
		printf("String1 > String2\n");

	strcat(str1, str1);

	//myStrConcat(str1,str1);
	// myStrCpy(str3,str1);

	printf("\nafter concatenation\n");
    printf("string1 is %s\n",str1);
    printf("The length of String1 = %d\n",myStrLen(str1));

	printf("\nafter strcopy\n");
    printf("string3 is %s\n",str3);
    printf("The length of String3 = %d\n",myStrLen(str3));

	//printf("%d",'0');

	return 0;
}

int myStrLen(char s[LSIZE])
{
	int i=0;

	while (s[i]) 	//same as s[i]!='\0'
		i++;
	return i;
}

int myStrCmp(char string1[LSIZE], char string2[LSIZE])
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

void myStrCpy(char string1[LSIZE], char string2[LSIZE])
{
	int i = 0;

    while (string2[i])
    {
    	string1[i] = string2[i];
    	i++;
    }
    string1[i] = '\0';
}


void myStrConcat(char string1[LSIZE], char string2[LSIZE])
{
	int i=0;
	int j=0;

	while(string1[i]) i++;

	while(string2[j])
	{
		string1[i+j] = (string2[j]);
		j++;
	}
	string1[i+j] = '\0';
}