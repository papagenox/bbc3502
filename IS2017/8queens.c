/*
Description: Using Brute-Force to solve 8 Queens Problem

Author:  Liutong Xu
Date: 2017/10/20
*/

#include <stdio.h>
#include <time.h>
int main()
{
    time_t start_time, end_time;
    clock_t sc, ec;

    sc = clock();
    start_time = time(NULL);
    printf("%s", ctime(&start_time));
    //getchar();

    int a[8][8];        //a[i][j]==1 means a Queen on ij-th position
    int i, j, k;
    int isvalid;
    int i0, i1, i2, i3, i4, i5, i6, i7;
    int count = 0;

    //all possible solutions
    for (i0 = 0; i0 < 8; i0++)
        for (i1 = 0; i1 < 8; i1++)
            for (i2 = 0; i2 < 8; i2++)
                for (i3 = 0; i3 < 8; i3++)
                    for (i4 = 0; i4 < 8; i4++)
                        for (i5 = 0; i5 < 8; i5++)
                            for (i6 = 0; i6 < 8; i6++)
                                for (i7 = 0; i7 < 8; i7++)
                                {
                                    for (i = 0; i < 8; i++)
                                        for (j = 0; j < 8; j++)
                                        {
                                            a[i][j] = 0;    //erase old data
                                        }
                                    a[0][i0] = 1;   //a queen on every row
                                    a[1][i1] = 1;
                                    a[2][i2] = 1;
                                    a[3][i3] = 1;
                                    a[4][i4] = 1;
                                    a[5][i5] = 1;
                                    a[6][i6] = 1;
                                    a[7][i7] = 1;

                                    isvalid = 1;    //possibly valid

                                    //testing for validity
                                    for (i = 0; i < 8 && isvalid; i++)
                                        for (j = 0; j < 8 && isvalid; j++)
                                        {
                                            for (k = 1; k < 8 && isvalid; k++)
                                            {
                                                if (a[i][j] * a[i + k][j] && i + k < 8)
                                                {
                                                    isvalid = 0;
                                                }
                                                //if (a[i][j] * a[i][j+k] && j+k<8) isvalid = 0;
                                                if (a[i][j] * a[i + k][j + k] && i + k < 8 && j + k < 8 )
                                                {
                                                    isvalid = 0;
                                                }
                                                if (a[i][j] * a[i - k][j + k] && i - k >= 0 && j + k < 8 )
                                                {
                                                    isvalid = 0;
                                                }
                                            }
                                        }

                                    //print out valid solution
                                    if (isvalid)
                                    {
                                        count++;            //one more valid solution
                                        for (i = 0; i < 8; i++)
                                        {
                                            printf("\n|");
                                            for (j = 0; j < 8; j++)
                                                if (a[i][j])
                                                {
                                                    printf("Q|");
                                                }
                                                else
                                                {
                                                    printf(" |");
                                                }
                                        }
                                        printf("\n=================");
                                    }

                                    //next possible solution
                                }

    printf("\nThere are %d solutions.\n", count);

    end_time = time(NULL);
    printf("%s", ctime(&start_time));
    printf("%s\n", ctime(&end_time));
    printf("The total running time is %d seconds\n", end_time - start_time);
    ec = clock();
    printf("sc = %d, ec = %d, Clock ticks: %f", sc, ec, (ec - sc) / (float)CLOCKS_PER_SEC);

    return 0;
}
