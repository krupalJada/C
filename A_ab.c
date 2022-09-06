#include<stdio.h>
main ()
{
  int a[10], i, b[10], j,t;
  for (i = 0; i < 5; i++)
    {
      printf ("Enter a[%d] :", i);
      scanf ("%d", &a[i]);

    }
  for (i = 0; i < 5; i++)
    {
      printf ("\n a[%d] : %d", i, a[i]);
      t=t+a[i];
    
        
        printf("\n total : %d",t);
        
    }
        
  for (j = 0; j < 5; j++)
    {
      printf ("\n Enter b[%d] :", j);
      scanf (" %d", &b[j]);
    }
  for (j = 0; j < 5; j++)
    {
      printf ("\n b[%d] : %d", j, b[j]);

    }
}
