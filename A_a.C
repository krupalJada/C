// covert alphabet
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Enter ch :");
	scanf("%c",&ch);

	if(ch<=90)
		printf("%c",ch+32);

	else
		printf("%c",ch-32);

	getch();
}