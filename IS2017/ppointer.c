/*Desc: pointer to pointer

Author: Liutong Xu 
Date: 2016/12/11
*/
#include<stdio.h>
int main()
{
    int a[5]={2, 4, 6, 8, 9};
    int *num[5]={&a[0],&a[1],&a[2],&a[3],&a[4]};
    int **ptr, i;
   
    ptr=num;
    for(i=0;i<5;i++)
    {
        printf("%d\t",**ptr);
        ptr ++;
    }

    return 0;
}
