#include<stdio.h> 
 
  
int fib(int n) 
{ 
    if (n <= 1) 
        return n; 
    return fib(n-1) + fib(n-2); 
} 
  
int main () 
{ 
    int n = 9, m=13, count-0; 
    for (int i=1;;i++) {
int f=fib(i);
if (f>=n) if (f<=m){printf("%d\n",f);count++;}else break;}
printf("%d\n",count); 
    getchar(); 
    return 0; 
}
