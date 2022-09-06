#include<stdio.h>
#include<conio.h>
int main()
{
	char i,n;

	for(i=65;i<=90;i++)
	{
		if(i%2!=0)
		{
			printf(" %c ",i);
		}
	}
	getch();
}