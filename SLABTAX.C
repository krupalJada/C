#include<stdio.h>
#include<conio.h>
void main ()
{
	float s,t,to;
	clrscr();
	printf("Enter a income of slab :");
	scanf("%f",&s);

	if(s<=2500)
	{
		t=(s*0);
		to=(s+t);
		printf("\n slab 1 income : %f",s);
		printf("\n tax of slab 1(0 per.)  : %f",t);
		printf("\n total income with tax : %f",to);
	}
	else if(s>2500 && s<=5000)
	{
		t=(s-2500)*0.10;
		to=(s+t);
		printf("\n slab 2 income : %f",s);
		printf("\n tax of remainig income slab 2(10 per.) : %f",t);
		printf("\n total income with tax : %f",to);
	}
	else if(s>5000 && s<=10000)
	{
		t=(s-5000)*0.20+250;
		to=(s+t);
		printf("\n slab 3 income : %f",s);
		printf("\n tax of remainig income  slab 3(20 per.) : %f",t);
		printf("\n total income with tax : %f",to);
	}
	else
	{
		t=(s-10000)*0.30+250+500;
		to=(s+t);
		printf("\n slab 4 income : %f",s);
		printf("\n tax of remaining income slab 4(30 per.) : %f",t);
		printf("\n total income with tax : %f",to);
	}

	getch();

}