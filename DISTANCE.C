#include<stdio.h>
#include<conio.h>
void main()
{

	float f,i,a,c,b,k,m;
	clrscr();
	printf("Enter city of A :");
	scanf("%f",&a);
	printf("Enter city of B :");
	scanf("%f",&b);

	k=b-a;
	printf("\n Distance in km : %.0f",k);
	m=(k*1000);
	printf("\n Distance in meters : %.0f",m);
	c=(m*100);
	printf("\n Distance in centimeters : %.0f",c);
	f=(c/30.48);
	printf("\n Distance in feet : %.2f",f);
	i=(f*12);
	printf("\n Distance in inches : %.2f",i);

	getch();
}