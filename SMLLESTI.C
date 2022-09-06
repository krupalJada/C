#include<stdio.h>
#include<conio.h>
void main ()
{
	int a,b;
	clrscr();
	printf("Enter a value of a :");
	scanf("%d",&a);

	printf("Enter a value of b :");
	scanf("%d",&b);

	if(a<b)
	{
	    printf("\n value of a is smallest : %d",a);

	}
	else
	{
	    printf("\n value of b is smallest :%d",b);

	}
	getch();


 }