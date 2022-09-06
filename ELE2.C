#include<stdio.h>
#include<conio.h>
int main()
{
	float u,a,c,t;
	clrscr();
	printf("Enter unit :");
	scanf("%f",&u);

	if(u<=150)
	    {
		a=(u*2)+100;
		printf("\n fix charges : 100 rs.");
		printf("\n amount of unit consumption : %f rs,",a);
	    }
	else if(u>150 && u<=400)
	    {
		a=(u-150)*4+100+300;
		printf("\n fix charges : 100 rs.");
		printf("\n 150 unit consumption : 300");
		printf("\n amout of remaining unit ; %f rs.",a);
	    }
       else if(u>400)
	    {
		a=(u-400)*6+100+300+1000;
		printf("\n fix charges : 100 rs.");
		printf("\n 1st 150 unit consumption : 300");
		printf("\n 2nd 250 unit consumption : 1000");
		printf("\n amout of remaining unit ; %f rs.",a);
	    }
      if (a>5000)
		c=(a*0.40);
		printf("\n amount of extra charges : %f rs.",c);
		printf("\n total amount with extra charges : %f",c+a);

      getch();
      return 0;




}