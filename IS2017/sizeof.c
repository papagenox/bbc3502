#include <stdio.h>

int main()
{

		printf("char                %d\n",(int)sizeof(char));
    	printf("short int           %d\n",(int)sizeof(short));
    	printf("int                 %d\n",(int)sizeof(int));
    	printf("long int            %d\n",(int)sizeof(long int));
   		printf("long long int       %d\n",(int)sizeof(long long int));
    	printf("float               %d\n",(int)sizeof(float));
    	printf("double              %d\n",(int)sizeof(double));
    	printf("long double         %d\n",(int)sizeof(long double));

	int i;

	i = 3;

	do i--;
	while (i);
	printf("%d",i);

    	return 0;
}
