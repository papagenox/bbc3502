#include<stdio.h>
int main()
{
   int i, offset, b[4] = {10,20,30,40};
   int * bPtr = b;

   for(i = 0;i <= 3;i++)
        printf("b[%d] = %d\n", i, b[i]);

   for(offset = 0;offset <= 3;offset++)
        printf("*(b + %d) = %d\n", offset, *(b + offset));

   for(i=0;i<=3;i++)
        printf("bPtr[%d] = %d\n", i, bPtr[i]);

   for(offset = 0;offset <= 3;offset++)
        printf("*(bPtr + %d) = %d\n", offset, *(bPtr + offset));

   return 0;
}
