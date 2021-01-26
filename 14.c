#include <stdio.h>

// Function to find n'th Fibonacci number
int fib(int n)
{
    if (n <= 1)
        return n;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n = 8;

    printf("nth Fibonacci number is %d", fib(8));

    return 0;
}