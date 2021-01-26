#include <stdio.h>
int main()
{
    int num1;
    double num2;
    printf("enter two numbers: ");
    scanf("%d%lf", &num1, &num2);
    printf("integer = %d\n", num1);
    printf("decimal = %lf", num2);
    return 0;

}