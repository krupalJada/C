#include<stdio.h>
#include<conio.h>
int main ()
{
	int X,y;
	clrscr();
	printf("enter x :");
	scanf("%d",&X );

	printf("enter y :");
	scanf("%d",&y);

	if(X<=2000 || X>=3000)
	{
		printf ("value of X : %d",X);
	}
	if(100<y && y<500)
	{
		printf("\nvalue of y : %d",y);

	}

	getch();
	return 0;
}