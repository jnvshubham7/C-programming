#include <stdio.h>
void display (char age1, char age2)
{
    printf("%c\n", age1);
    printf("%c\n", age2);

   
}
int main()
{
     char ageArray[] = {'s', 'a', 'a', 'a'};
    display(ageArray[0], ageArray[1]);
    return 0;
}