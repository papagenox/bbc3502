/*
The Collatz conjecture is a conjecture in mathematics that concerns a sequence defined as follows: start with any positive integer n. Then each term is obtained from the previous term as follows: if the previous term is even, the next term is one half the previous term. Otherwise, the next term is 3 times the previous term plus 1. The conjecture is that no matter what value of n, the sequence will always reach 1.
*/

#include<stdio.h>

void collatz(int n);
int main()
{
    int n;
    //n = 27;
    scanf("%d", &n);
    printf("f(%d) = ", n);
    collatz(n);

    return 0;
}

void collatz(int n)
{
    static int steps = -1;       // Record the number of steps

    steps++;
    if (n == 1)
    {
        printf("1\n");
        printf("Total steps: %d\n", steps);     // print out the steps at the end of process
    }
    else if (n % 2 == 0)                        // in case of even number
    {
        printf("D(%d)", n / 2);
        collatz(n / 2);
    }
    else                                        // in case of odd number
    {
        printf("M(%d)", 3 * n + 1);
        collatz(3 * n + 1);
    }
}