#include <stdio.h>

int (*operation)(int x, int y);
int add(int x, int y);
int subtract(int x, int y);

int main()
{
   int  foo = 1, bar = 1;

   operation = add;
   printf("%d + %d = %d\n", foo, bar, operation(foo, bar));
   operation = subtract;
   printf("%d - %d = %d\n", foo, bar, operation(foo, bar));
   return 0;
}

int add(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}