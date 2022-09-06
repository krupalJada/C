#include<stdio.h>
main ()
{
  int i,stat[5],eco[5],ac[5];
  float p[5],t[5],g[i];
  
  for (i=0;i<5;i++)
    {
      printf ("Enter stat[%d] :", i);
      scanf ("%d", &stat[i]);
    }
 for (i=0;i<5;i++)
    {
      printf ("Enter eco[%d] :", i);
      scanf ("%d", &eco[i]);
    }
 
 for (i=0;i<5;i++)
    {
      printf ("\n Enter ac[%d] :", i);
      scanf (" %d", &ac[i]);
    }
    printf("stat\teco\tac\ttotal\tper\tgrade");
 for(i=0;i<5;i++)
   {
        t[i]=stat[i]+eco[i]+ac[i];
        p[i]=(t[i]*100)/300;
     
     printf("\n %d\t%d\t%d\t%.2f\t%.2f\t",stat[i],eco[i],ac[i],t[i],p[i]);
    
    if(stat[i]<=35 ||eco[i]<=35 || ac[i]<=35)
    {
        printf("Fail");
    }
    else
    {
        if(p[i]>=90)
        {
         printf("A");
        }
        else if(75<=p[i] && 90>p[i])
        {
         printf("B");
        }
        else if(60<=p[i] && 75>p[i])
        {
         printf("c");
        }
        else if(40<=p[i] && 60>p[i])
        {
         printf("D");
        }
        else if(40>p[i])
        {
         printf("Fail");
        }
    }
   }
}