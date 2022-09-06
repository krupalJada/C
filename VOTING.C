#include<stdio.h>
#include<conio.h>
int main ()
{
	int a;
	printf("Enter a age :");
	scanf("%d",a);

	if(a>=18)
	{
		printf("person is eligible for voting : %d",a);

	}
	else

	{
		printf("person is not eligible for voting : %d",a);

	}
	getch();


}