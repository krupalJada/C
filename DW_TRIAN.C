#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,sp=40;
	clrscr();
	i=1;
	do
	{       j=1;
		do
		{
			printf(" ");
			j++;
		}while(j<=sp);
		j=1;
		do
		{
			printf(" *");
			j++;
		}while(j<=i);
		printf(" \n");
		sp--;
		i++;
	}while(i<=7);
	i=7;
	do
	{       j=1;
		do
		{
			printf(" ");
			j++;
		}while(j<=sp);
		j=0;
		do
		{
			printf(" *");
			j++;
		}while(j<=i);
		printf(" \n");
		sp++;
		i--;
	}while(i>=0);
	i=1;
	do
	{       j=2;
		do
		{
			printf(" ");
			j++;
		}while(j<=sp);
		j=1;
		do
		{
			printf(" *");
			j++;
		}while(j<=i);
		printf(" \n");
		sp--;
		i++;
	}while(i<=3);



	getch();
}





