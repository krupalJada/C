#include<stdio.h>
void pattern(int n)
{
    int i,j,sp=15;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=sp;j++)
            printf(" ");
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
        sp--;
        printf("\n");
    }
}
int main()
{
    // pattern(1);
    // pattern(2);
    // pattern(3);
    pattern(4);
    pattern(5);
    return 0;
} 