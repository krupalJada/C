#include<stdio.h>
#include<conio.h>
void main()
{
	char i;
	clrscr();
	i=65;
	while(i<90)
	{
		if(i%2!=0)
		printf(" %c",i);
		i++;
	}
	getch();
}