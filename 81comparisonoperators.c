#include <stdio.h>
int main()
{
    int a = 5, b = 10;

    printf("%d\n", b > -1);
    printf("%d\n", b > 5);

    printf("%d\n", a >= 5);
    printf("%d\n", a >= b);

    printf("%d\n", a < b);
    printf("%d\n", a < 5);
    
    printf("%d\n", a <= 5);
    printf("%d\n", a <= 1);

    printf("%d\n", a == 5);
    printf("%d\n", a == b);

    printf("%d\n", b != 5);
    printf("%d\n", b != 7);

    return 0;


   
}