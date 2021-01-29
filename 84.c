#include <stdio.h>
int main()
{
    int age = 18, salary = 200, result;
result =  age >= 18  && salary >= 100;
    printf("%d\n", result);
    printf("%d\n", age >= 16 && salary >= 500);
    return 0;
}