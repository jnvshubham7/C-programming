#include<stdio.h>
   int fib(int );
   void main()
 {  int i, n;
    printf("Enter a number of term");
    scanf("%d", &n);
    printf("\nThe fibonacci series :\n");
    for (i=0;i<=n;i++)
         printf(" %d ",fib(i));

  }
   int fib(int n)
   {
    int f1=0,f2=1,f;
    do{
    f=f1+f2;
    f1=f2;
    f2=f;
     n--;
   }while(n>1);
    return f;
    }