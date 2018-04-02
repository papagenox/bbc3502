/*Description:  String reversing
		array, pointer

Author:  Liutong Xu
Date: 2016/12/05
*/

#include<stdio.h>
#define LSIZE 81

void strRev(char []);
void strRevP(char *s);
int main()
{
    char str[LSIZE];

    printf("Enter string: ");
    fgets(str,LSIZE,stdin);
    //fgets(str);

    printf("string is %s\n",str);

	strRev(str);

	printf("\nafter reverse\n");
    printf("string is %s\n",str);

	return 0;
}

void strRev(char s[])
{
	char stemp;
	int len=0;
	int i;

	while (s[len]) 	//same as s[len]!='\0'
		len++;
	len--;
	//len points to the last char in the string s;

	for (i=0;i<=len/2;i++)
	{
		stemp = s[i];
		s[i] = s[len-i];
		s[len-i] = stemp;
	}
}

void strRevP(char *s)
{
	char stemp;
	char *ep;

	ep = s;

	while (*ep)
		ep++;
	ep--;
	//end points to the last char in the string s;

	while (s<ep)
	{
		stemp = *s;
		*s = *ep;
		*ep = stemp;
		s++;
		ep--;
	}
}
