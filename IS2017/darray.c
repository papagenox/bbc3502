/*Desc: Dynamically Memory Allocation

Author: Liutong Xu
Date: 2016/12/11
*/
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int *array=NULL, num, i;
    printf("Input the number of element: ");
    scanf("%d", &num);

    array = malloc(sizeof(int) * num);

    if (array == NULL)				//Fail to allocate memory
        printf("out of memory");
    else
    {
		printf("Input %d elements: \n", num);
    	for (i=0; i<num; i++)
	    scanf("%d", &array[i]);		// array+i

        printf("%d elements are:\n",num);
   		for (i=0; i<num; i++)
            printf("%4d", *(array++));	// *(array+i)
        printf("\n");

   		free(array);
       	array=NULL;
    }

    return 0;
}