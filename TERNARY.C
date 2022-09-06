// find greater out of 4 value
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	clrscr();
	printf("Enter value of = ");
	scanf("%d %d %d %d",&a,&b,&c,&d);

	 (a>b && a>c && a>d)
		     ? printf("a is greater = %d",a)
		     :(b>c && b>d)
			  ? printf("b is greater =%d",b)
			  :(c>d)
			      ? printf("c is greater =%d",c)
			      : printf("d is greater =%d",d);





	getch();





}