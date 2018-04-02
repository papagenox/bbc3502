/*Desc: string and string pointer
	string is an array of char, it contains a string
	string pointer is just a pointer, which points to a string
	And, string literal cannot been overwritten.

Author: Liutong XU
Date: 2016/12/15
*/
#include <stdio.h>
#include<string.h>
int main()
{
	char s[81]={"Hello"};
	char *sp1,*sp2;
	printf("s = %s\n",s);
	sp1 = "Hello World!";	//OK, sp1 points to a string literal "Hello World!"
	sp2 = sp1;				//OK, sp2 points to same string as sp1 does
	printf("sp1 points to: %s\n",sp1);
	printf("sp2 points to: %s\n",sp2);

	//s = "Hi";				//Not valid
	strcpy(s,"Hi");			//OK
	printf("s = %s\n",s);

	//strcpy(sp1,"Bye");		//Not valid; sp1 is just a pointer

	sp1 = s;
	printf("sp1 points to: %s\n",sp1);

	strcpy(sp1,"ByeBye");	//OK now, because sp1 points to s.
	printf("sp1 points to: %s\n",sp1);
	printf("s = %s\n",s);

	return 0;
}