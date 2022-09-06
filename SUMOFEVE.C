#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,t=0;
	clrscr();
	printf("Enter n :");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		if(i%2==0)
	      {
		printf("%d ",i);
		t+=i;
	      }
	}
	 printf(" =%d ",t);

}