#include<stdio.h>
#include<conio.h>
void main()
{
	char i,j,a=65;
	clrscr();
	i=65;

	while(i<=69)
	{
		j=65;
		while(j<=i)
		{
			printf(" %c",a++);
			j++;
		}
		printf(" \n");
		i++;
	 }
	getch();
}