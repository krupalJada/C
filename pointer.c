#include<stdio.h>
void main()
{
    int c=10,d=20,*a,*b;
    a = &c;
    b = &d;
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;    
    printf("\n value c : %d",*a);
    printf("\n value d : %d",*b);
 
}













