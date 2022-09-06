#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a=1;
	clrscr();
	i=1;
	do
	{
		j=1;
		do
		{
			if(a%2==1)
			printf(" %d",1);
			else
			printf(" %d",0);
			a++;
			j++;
		}while(j<=i);
		printf(" \n");
		i++;
	 }while(i<=5);
	getch();
}