#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,t=0;
	clrscr();
	printf("Enter n :");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(i%2!=0)
	      {
		printf("%d ",i);
		t+=i;
	      }i++;
	}
	 printf(" = %d ",t);

	getch();





}