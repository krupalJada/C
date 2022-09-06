#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a=1;
	clrscr();
	printf("Enter n :");
	scanf("%d",&n);
	i=1;
	do
	{
		printf(" %d",a*i);
		a+=a;
		i++;
	}while(i<n);
	getch();
}