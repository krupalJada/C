#include<stdio.h>
main ()
{
  int i,a[5],b[5],t[5],k=0,g,n;
  for (i=0;i<5;i++)
    {
      printf ("Enter a[%d] :", i);
      scanf ("%d", &a[i]);
    }
 for (i=0;i<5;i++)
    {
      printf ("\n Enter b[%d] :", i);
      scanf (" %d", &b[i]);
    }
 for(i=0;i<5;i++)
   {
      t[i]=a[i]*b[i];
      k=k+t[i];
      g=k*0.18;
      n=k+g;
   }
      printf ("\n a\tb\tamount:");
 for(i=0;i<5;i++)
      printf("\n %d\t%d\t%d",a[i],b[i],t[i]);
      printf("\n \ttotal =%d",k);
      printf("\n \tGst =%d",g);
      printf("\n\tnet total =%d",n);
}
    
