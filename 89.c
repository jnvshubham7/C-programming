#include <stdio.h>
int main()
{
    int number;
    printf("enter a number");
    scanf("%d", &number);
    if (number > 0)
    {
    printf("positive number");
    }
    else if (number == 0)
    {
    printf("zero ");
    }
    else
    {
        printf("negative number");

    }
 
    return 0;
}