#include<stdio.h>
#include<conio.h>
void main()
{
	int denominater,composite,quotient,remainder;
	clrscr();
	printf(" Enter a value of composite : ");
	scanf("%d",&composite);
	printf(" Enter a value of denominater : ");
	scanf("%d",&denominater);

	quotient=composite/denominater;
	printf(" ans of quotient : %d",quotient);
	remainder=composite % denominater;
	printf("'\n  ans of remainder : %d",remainder);

	getch();

}