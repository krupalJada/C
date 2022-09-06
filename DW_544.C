#include<stdio.h>     //when i print- p= 544
#include<conio.h>     //when j print- p=554
void main()
{
	int i,j;
	clrscr();
	i=5;
	do
	{
		j=5;
		do
		{
			printf(" %d",j);
			j--;
		}while(j>=i);
		printf(" \n");
		i--;
	 }while(i>=1);
	getch();
}