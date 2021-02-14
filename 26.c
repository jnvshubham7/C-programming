#include<stdio.h>
int *x[100],no,i;

void buildheap();

void sort();

 

void main()

{

  clrscr();

  printf("\n Enter the number of elements\n");

   scanf("%d",&no);

  printf("\n Enter %d numbers\n",no);

  for(i=1;i<=no;++i)

  scanf("%d",&x[i]);

  buildheap();

  sort();

  printf("\n Sorted elements are:\n");

  for(i=1;i<=no;++i)

  printf("%5d",x[i]);

  getch();

}

 

void buildheap()

{

  int j,k,*temp;

  for(k=2;k<no;++k)

  {

    i=k;

    temp=x[k];

    j=i/2;

    while((i>1)&&(temp>x[j]))

    {

      x[i]=x[j];

      i=j;

      j=i/2;

      if(j<1)j=1;

    }

    x[i]=temp;

  }

}

 

void sort()

{

  int *temp,*value,j,k;

   for(k=no;k>=2;--k)

       {

            temp=x[1];

            x[1]=x[k];

            x[k]=temp;

            i=1;

            value=x[1];

            j=2;

            if ((j+1)<k)

            if(x[j+1]>x[j])

            j++;

           while((j<=(k-1))&&(x[j]>value))

           {

             x[i]=x[j];

             i=j;

             j=2*i;

             if ((j+1)<k)

             if(x[j+1]>x[j])

             j++;

             else

               if(j>no)

               j=no;

               x[i]=value;

           }

       }