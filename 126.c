#include <stdio.h>
int main()
{
    int i, x[6], sum = 0;
    printf("enter 6 numbers: ");
    for(i = 0; i<6; ++i)
    {
        scanf("%d", x+i);
        sum += *(x+i); // [i] = *(x+i)  we will use both of them 
    }
    printf("sum = %d", sum);
    
    
    return 0;
}