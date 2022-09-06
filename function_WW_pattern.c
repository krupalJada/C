#include<stdio.h>
int sum(int i,int j)
{
    return i,j;
}
int main()
{
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}