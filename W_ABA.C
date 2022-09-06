#include<stdio.h>
#include<conio.h>
void main()
{
	char i,j;
	clrscr();
	i=65;

	while(i<=69)
	{
		j=i;
		while(j>=65)
		{
			printf(" %c",j);
			j--;
		}
		printf(" \n");
		i++;
	 }
	getch();
}