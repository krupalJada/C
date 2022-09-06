#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("enter ch :");
	scanf("%c",&ch);

	if(ch>101 && ch<106)
		printf("e %c j ",ch);
	else if(ch>106 && ch<111)
		printf("%c %c %c",106,ch,111);
	else if(ch>111 && ch<116)
		printf("%c %c %c",111,ch,116);
	else if(ch>116 && ch<121)
		printf("%c %c %c",116,ch,121);
}