#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,n=5,avg;
	clrscr();
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("Enter c:");
	scanf("%d",&c);
	printf("Enter d:");
	scanf("%d",&d);
	printf("Enter e:");
	scanf("%d",&e);

	avg=(a+b+c+d+e)/n;
	printf("\n\n ans : %d",avg);
	getch();

}