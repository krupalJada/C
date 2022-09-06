#include<stdio.h>
#include<conio.h>
int main()
{

	char i,j,a=65;
	for(i=65;i<=69;i++)
	{
		for(j=65;j<=i;j++)
		{
			printf(" %c\t  ",a++);
		}
		printf(" \n");

	}
	getch();
}