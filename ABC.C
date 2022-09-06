#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Enter ch :");
	scanf("%c",&ch);


	if(ch>69&&ch<74)
	printf("69 %c 74",ch);
	else if(ch>75&&ch<79)
	printf("\n 75 %c 79",ch);
	else if(ch>79&&ch<84)
	printf("\n 79 %c 84",ch);
	else if(ch>85&&ch<89)
	printf("\n O %c Y",ch);

	getch();




}