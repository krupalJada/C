#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("Enter ch :");
	scanf("%c",&ch);


	if(ch>69&&ch<74)
	{
		printf("E %c J",ch);
	}
	else if(ch>74&&ch<79)
	{
		printf("\n J %c O",ch);
	}
	else if(ch>79&&ch<84)
	{
		printf("\n O %c T",ch);
	}
	else if(ch>84&&ch<89)
	{
		printf("\n T %c Y",ch);
	}

	getch();




}