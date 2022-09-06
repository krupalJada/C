#include<stdio.h>
#include<conio.h>
int main()
{
	float i,a=0.5;
	int n;
	printf("Enter n :");
	scanf("%d",&n);

	for(i=0.5;i<=n;i++)
	{

		printf(" %.1f ",a);
		a+=i;
	}
	getch();
}
