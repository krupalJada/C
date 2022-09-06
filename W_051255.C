#include<stdio.h>
#include<conio.h>
void main()
{
	float i,a=0.5;
	int n;
	clrscr();
	printf("Enter n :");
	scanf("%d",&n);
	i=0.5;
	while(i<=n)
	{

		printf(" %.1f ",a);
		a+=i;
		i++;
	}
	getch();
}
