#include<stdio.h>
#include<conio.h>
int main()
{
     char ch;     

     printf("Enter ch :");
     scanf("%c",&ch);

     if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
     {
	printf("\n this is vowel :%c",ch);

     }
     else
     {
	printf("\n this is consonants :%c",ch);

     }
     getch();

}