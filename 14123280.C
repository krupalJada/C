#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a=1,n;
	printf("Enter n :");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf(" %d ",i*a);
		a+=a;
	}
	getch();
}