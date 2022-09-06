#include<stdio.h>
#include<conio.h>
int main()
{

	char i,j,a=65;
	for(i=65;i<=69;i++)
	{
		for(j=65;j<=i;j++)
		{
			if(i%2!=0)
			printf(" %c\t ",a);
			else
			printf(" %c\t ",a+32);
			a++;
		}
		printf(" \n");

	}
	getch();
}