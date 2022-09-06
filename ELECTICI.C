#include<stdio.h>
#include<conio.h>
int main()
{
	float b,a,t,c,unit;
	clrscr();
	printf("Enter a unit:");
	scanf("%f",&unit);


	if(unit<=100)
	{
		b=unit*0.60;
		a=(unit*0.60)+50;
		printf("fix charge = 50Rs.\n charge of unit comsuption : %fRs.",b);
		printf("\ntotal amout of : %fRs.",a);


	}
	else if(unit>100 && unit<=300)
	{       b=(unit-100)*0.80;
		a=(unit-100)*0.80+50+60;

		printf("\n first 100 unit charges = 60 Rs.");
		printf("\n fix charge = 50Rs.\n charge of unit comsuption after 100 unit : %fRs.",b);
		printf("\n total amout of a: %f",a);
	}
	else if(unit>300)
	{
		b=(unit-300)*0.90;
		a=(unit-300)*0.90+50+60+160;
		printf("\n first 100 unit charges = 60 Rs.");
		printf("\n next 200 unit charges = 160 Rs.");
		printf("\n fix charge = 50Rs.\ncharge of unit comsuption after 300 unit: %fRs.",b);
		printf("\n total amount of a:%f",a);
	}
	if (a>300)

	{
		c=(a*0.15);
		printf("\n amount of 15 per. charges :%f",c);
		printf("\n Total Bill with Surcharge: %f",c+a);
	}

	getch();
	return 0;
}