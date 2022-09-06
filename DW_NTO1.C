#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	i=n;
	do
	{
		printf(" %d",i);
		i--;

	}while(0<i);
	getch();
}
