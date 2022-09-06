#include<stdio.h>
#include<conio.h>
void main ()
{
    int a;
    clrscr();
    printf("Enter a value of a :");
    scanf("%d",&a);

    if ((a % 5 == 0) && (a % 3 ==0))
    {
       printf("\n value of a= %d is divisible by 5 and 3 :");
    }
    else
    {
      printf("\n value of a = %d is not divisible by 5 and 3:");
    }
    getch();





}