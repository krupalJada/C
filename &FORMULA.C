#include<stdio.h>
#include<conio.h>
void main()
{
      int a,b,c,d,z;
      clrscr();
      printf("Enter value of a :");
      scanf("%d", &a);
      printf("Enter value of b :");
      scanf("%d", &b);
      printf("Enter value of c :");
      scanf("%d", &c);
      printf("Enter value of d :");
      scanf("%d", &d);

      printf("\n  a  : %d",a);
      printf("\n  b  : %d",b);
      z=a+b;
      printf("\n a+b : %d",z);
      z=a-b;
      printf("\n a-b : %d",z);
      z=a*b;
      printf("\n a*b : %d",z);
      z=a/b;
      printf("\n a/b : %d",z);
      z=a-b-c-d;
      printf("\n a-b-c-d  :%d",z);
      z=a+b+c+d;
      printf("\n a+b+c+d  :%d",z);
      z=a*b*c*d;
      printf("\n a*b*c*d  :%d",z);
      z=a/b/c/d;
      printf("\n a/b/c/d  :%d",z);

      getch();


}