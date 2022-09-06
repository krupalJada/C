// calculate simple intrest

#include<stdio.h>
void sum(int i,float j)
{
    printf("\n sum : %.2f",i*(j)/100);
}
int main()
{
    int a,b;
    printf("Enter amount :");
    scanf("%d",&a);
    printf("Enter intrest rate :");
    scanf("%d",&b);
    sum(a,b);
    return 0;   
}