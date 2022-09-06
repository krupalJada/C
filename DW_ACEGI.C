#include<stdio.h>
#include<conio.h>
void main()
{
	char i;
	clrscr();
	i=1;
	do
	{
		if(i%2==1)
		{
			printf(" %c  %c ",i+64,i+98);

		}i+=4;

	}while(i<=24);
	getch();
}