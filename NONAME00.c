#include<stdio.h>
#include<conio.h>
void main ()
{
	int d;
	float w1,w,m1,m,y,rd;
	clrscr();
	printf("Enter days :");
	scanf("%d",&d);

	y=(d/365);
	printf("\n year : %.0f",y);

	m1=d-(y*365);
	m=m1/30;
	printf("\n month : %.0f",m);

	w1=d-(y*365)+(m*30);
	w=w1/7;
	printf(" \n weeks : %.0f",w);

	rd=d-((y*365)+(m*30)+(w*7));
	printf("\n remaing days :%.0f",rd);


	getch();


}



