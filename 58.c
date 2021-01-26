#include <stdio.h>
void display();
int main()
{
    display();
    display();
    display();
    display();
}
void display()
{
    static int c = 6;
    c += 4;
    printf("%d ",c);
}