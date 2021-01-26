#include<stdio.h>
int main()
{   
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int min=65536;
    int minnum=a[0];

    int i,ct=1;
    for(i=1;i<=n-1;i++)
    {
        if(a[i]==a[i-1])
        {
            ct++;
        }
        else
        {
            if(ct<min)
            {
                min=ct;
                ct=1;
                minnum=a[i-1];
            }
        }
    }
    if(ct<min)
    {
        min=ct;
        ct=1;
        minnum=a[i-1];
    }
  printf("%d",minnum);
}