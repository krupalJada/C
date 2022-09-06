#include<stdio.h>
#include<conio.h>
void main()
{

	 float q,r,a,d,g;
	 clrscr();

	 printf("Quantity");
	 scanf(" %f",&q);
	 printf("rate");
	 scanf(" %f",&r);
	 printf("\nQuantity\trate\tamount\tdiscount\tgst\tbill");

	 printf("\n%.0f",q);
	 printf("\t\t%.0f",r);
	 a=q*r;
	 printf("\t%.3f",a);

	 d=a*0.10;
	 printf("\t%.3f",d);

	 g=a*0.18;
	 printf("\t\t%.3f",g);

	 printf("\t%.3f",a-d-g);

	 getch();


}