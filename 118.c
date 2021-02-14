#include <stdio.h>
#include<time.h>
  int main ()
  {
    clock_t start, end;
    double cpu_time_used;
    start = clock ();
    int i, n, j, k, temp, c = 0;

    printf ("Enter size of the array : ");
    scanf ("%d", &n);
    int a[n], b[n];
    int (*p1) [n];
    int (*p2) [n] ;
    p1=&a;
    p2=&b;

    printf ("Enter elements in array : ");
    for (i = 0; i < n; i++)
      {
	scanf ("%d", p1[i]);
	if (*(p1)[i]% 2 == 1)
	  c++;
      }
    for (i = 0; i < n - 1; i++)
      {

	for (j = 0; j < n - i - 1; j++)
	  {
	    if (*(p1)[j] > *(p1)[j + 1])
	      {
		temp = *(p1)[j];
		*(p1)[j] = *(p1)[j + 1];
		*(p1)[j + 1] = temp;
	      }
	  }

      }
    k = 0;
    j = n - c;

    for (i = 0; i < n; i++)
      {
	if ((*p1)[i] % 2 == 0)
	  {
	    if (k < n - c)
	      *p2[k++] = *(p1)[i];
	  }
	else
	  {
	    if (j < n)
	      *p2[j++] = *(p1)[i];
	  }
      }

    printf ("\narray after sorting even and odd elements separately:\n ");
    for (i = 0; i < n; i++)
      {
	*p1[i] = *(p2)[i];
	printf ("%d ", *(p1)[i]);
      }

    end = clock ();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf ("Time to run program: %f SECONDS \n", cpu_time_used);

}