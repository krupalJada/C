#include<stdio.h>
#include<conio.h>
void main()
{
	char i;
	clrscr();
	i=65;
	while(i<91)
	{

		printf("\n %c-%c",i,i+32);
		i++;

	}
	getch();
}