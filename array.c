#include<stdio.h>
int main()
{
    int a[10],i;
    for(i=0;i<5;i++){
        printf("\n Enter a[%d] :",i);
        scanf("%d",&a[i]);
    }
        printf("Array :");
    for(i=0;i<5;i++){
        printf(" %d",a[i]);
    }
}