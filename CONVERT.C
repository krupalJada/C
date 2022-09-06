#include<stdio.h>
#include<conio.h>
void main ()
{
	int d,w,m,y,rd;
     //	float w1,w,m1,m,y,rd;
	clrscr();
	printf("Enter days :");
	scanf("%d",&d);

	y=(d%365);
	printf("\n year : %d",y);

	m=(1-y)-
	printf("\n month : %d",m);

	w=w1/7;
	printf(" \n weeks : %d",w);

	rd=d-((y*365)+(m*30)+(w*7));
	printf("\n remaing days :%d",rd);


	getch();


}



