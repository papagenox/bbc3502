#include <stdio.h>
#include <stdlib.h> /* declares malloc */

int *func();
int main()
{
    int *a;
    //a = malloc(100000 * sizeof(int));
    a = func();
    if (a == NULL) return 7;
    a[3] = 10;
    printf("%d\n", a[3]);

    // int i;
    // i = *func();
    // printf("%d\n",i);
    return 0;
}

int *func()
{
    int *a;
    a = malloc(100000 * sizeof(int));
    return a;
}
