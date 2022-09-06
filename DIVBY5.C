#include<stdio.h>
#include<conio.h>
void main ()
{
    int a;
    clrscr();
    printf("Enter a value of a :");
    scanf("%d",&a);

    if (a % 5 == 0)
    {
       printf("\n value of a is divisible by 5 :");
    }
    else
    {
      printf("\n value of a is not divisible by 5:");
    }
    getch();





}