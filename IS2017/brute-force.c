/*
description: input data validation
author: Liutong Xu
Date:2016/11/03
*/
#include <stdio.h>

int main()
{
    int a,b,result;
    char choice;
    char fkey;
    choice = 'b';
    while (choice != 'e')
    {
        do      //if input data is not valid, you will be asked to input again
        {
            printf("=========================\n");
            printf("Arithmetic Operation\n");
            printf("a - addition\n");
            printf("s - substraction\n");
            printf("m - multiplication\n");
            printf("d - division\n");
            printf("e - exit\n");
            printf("Please Input Your Choice:\n");
            scanf("%c",&choice);
        }
        while (choice != 'a' && choice != 's' && choice != 'm' && choice != 'd' && choice != 'e');

        if (choice !='e')
        {
            printf("Please input two integers: ");
            scanf("%d%d%c",&a,&b,&fkey);

            switch (choice)
            {
            case 'a':
                result = a + b;
                break;
            case 's':
                result = a - b;
                break;
            case 'm':
                result = a * b;
                break;
            case 'd':
                result = a / b;
                break;
            }
            printf("The result is %d\n",result);
        }
        else
            printf("Goodbye!\n");
    }
    return 0;
}