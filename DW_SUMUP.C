#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,t=0;
	clrscr();
	printf("Enter n;");
       scanf("%d",&n);
	i=1;
	do
	{
		printf(" %d",i);
		t+=i;
		i++;


	}while(i<n);
		printf(" = %d",t);

	getch();
}