#include<stdio.h>

void substr(char str[80], char subs[80]);
int main()
{
    char s1[80] = "Hello, World!";
    char s2[80] = "He";
    char s3[80] = "";

    substr(s1,s2);
    substr(s1,s3);

    return 0;
}

void substr(char str[80], char subs[80])
{
    int pos = 0, i;
    int len1 = 0, len2 = 0;
    int found = 0;

    while (str[len1]) len1++;
    while (subs[len2]) len2++;
    if (len2 == 0) found = 1;   //empty string is always a substring of any string

    while (!found && len1 - pos >= len2)
    {
        // Locate the first character that equals to the first character of subs
        while (str[pos] != subs[0]) pos++;

        if (len1 - pos >= len2)
        {
            i = 0;
            while (i < len2 && str[pos + i] == subs[i])     //Test whether all characters are same?
            {
                i++;
            }
            if (i == len2)      //all characters are same
            {
                found = 1;
            }
            else
                pos++;
        }
    }
    if (found)
        printf("\"%s\" is a substring of \"%s\" starting from position %d\n", subs, str, pos);
    else
        printf("\"%s\" is not a substring of \"%s\"\n", subs, str);
}