#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("Enter n :");
	scanf("%d",&n);

	i=1;
	while(n>i)
	{
		printf("\n %d",i);
		i++;

	}
	getch();
}