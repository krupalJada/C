#include<stdio.h>
#include<conio.h>
void main ()
{

	int m,w,d,y,rd;
	clrscr();
	printf("Enter days :");
	scanf("%d",&d);

	y=(d/365);
	printf("\n year : %d",y);

	m=((d)-(y*365))/30;
	printf("\n month : %d",m);

	w=((d)-(y*365)-(m*30))/7;
	printf(" \n weeks : %d",w);

	rd=((d)-(y*365)-(m*30)-(w*7));
	printf("\n remaing days :%d",rd);


	getch();


}



