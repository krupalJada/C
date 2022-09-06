#include<stdio.h>
#include<conio.h>
void main ()
{
       int h,b,z;
       clrscr();
       printf("enter value of h :");
       scanf("%d",&h);
       printf("enter value of b :");
       scanf("%d",&b);

       z=h*b/2;
       printf("calculate area of triangle = h*b/2: %d",z);
       getch();

}