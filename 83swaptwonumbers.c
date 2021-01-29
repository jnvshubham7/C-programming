#include <stdio.h>
int main()
{
    int a = 57, b = 1, temp;
    temp = a;
    a = b;
    b = temp;

    printf(" a = %d b = %d", a , b );
    return 0;
}