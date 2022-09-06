#include<stdio.h>
#include<conio.h>
int main ()
{
  int i,qty[5],rate[5],t[5];
  float r[5],g[5],n[5],d[5],total=0,gst=0,dis=0,amount=0;
  for (i=0;i<5;i++)
    {
      printf ("Enter qty[%d] :", i);
      scanf ("%d", &qty[i]);
    }
 for (i=0;i<5;i++)
    {
      printf ("\n Enter rate[%d] :", i);
      scanf (" %d", &rate[i]);
    }
 for(i=0;i<5;i++)
   {
      t[i]=qty[i]*rate[i];
      d[i]=t[i]*0.10;
      r[i]=t[i]-d[i];
      g[i]=r[i]*0.18;
      n[i]=r[i]+g[i];
      total=total+t[i];
      dis=dis+d[i];
      gst=gst+g[i];
      amount=amount+n[i];
   }
      printf ("\n qty\trate\tamount\tdis.\tr-Amt\tGst\tnetamount:");
      
 for(i=0;i<5;i++)
   {
      printf("\n %d\t%d\t%d\t%.2f\t%.2f\t%.2f\t%.2f",qty[i],rate[i],t[i],d[i],r[i],g[i],n[i]);
   }
      printf("\n ------------------------------------------------------------------------");
      printf("\n total amount :%.2f",total);
      printf("\n less :total discount :%.2f",dis);
      printf("\n total gst :%.2f",gst);
      printf("\n amount paid :%.2f",amount);
   
    return 0;;  
}
    
