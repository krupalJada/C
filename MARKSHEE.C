#include<stdio.h>
#include<conio.h>
int main()
{
	float a,b,c,d,e,t,P;
	printf("Enter a marks of a :");
	scanf("%f",&a);

	printf("Enter a marks of b :");
	scanf("%f",&b);

	printf("Enter a marks of c :");
	scanf("%f",&c);

	printf("Enter a marks of d :");
	scanf("%f",&d);

	printf("Enter a marks of e :");
	scanf("%f",&e);

	t=a+b+c+d+e;
	printf("\n total of all sub :%f",t);

	P=(t*100/500);
	printf(" \n percentage : %f",P);

	if(P>=75)
	{
		printf("\n Grade A :");
	}
	else if(P<75 && P>=60)
	{
		printf("\n Grade B :");
	}
	else if(P<60 && P>=45)
	{
		printf("\n Grade C :");
	}
	else if(P<45 && P>=35)
	{
		printf("\n Grade D :");
	}
	else
	{
		printf("\n Fail :");
	}
	getch();
	return 0;
 }