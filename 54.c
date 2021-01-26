#include <stdio.h>

int main()
{
    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j += 2)
            if (j == 1)
                printf("%d", j);
            else
                printf("*%d", j);
        printf("\n");
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j < n - i; j++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j += 2)
            if (j == 1)
                printf("%d", j);
            else
                printf("*%d", j);
        printf("\n");
    }
    return 0;
}