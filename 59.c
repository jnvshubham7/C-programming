#include<stdio.h>   
int main()
{ 
    for ( i = 1 ; i <= 10; ++i)
    {
   if (i==3)
   continue;
   if (i==7)
   break;
   printf("%d ",i);
    }
return 0; 

}  