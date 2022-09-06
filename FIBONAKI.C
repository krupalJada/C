#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,n1=0,n2=0,n3=1;
	printf("Enter n :");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{

		printf(" %d ",n3);
		n1=n2;
		n2=n3;
		n3=n1+n2;
	}
	getch();
}