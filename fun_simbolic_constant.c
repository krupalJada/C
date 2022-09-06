#include<stdio.h>
#define n 5
void arr(int a[]){
    int i;
    for(i=0;i<n;i++)
    {
        printf("  %d",a[i]);
    }
}
int main(){
    int i,a[n];
    for(i=0;i<n;i++){
        printf("Enter no a[%d] :",i);
        scanf("%d",&a[i]);
    }
    arr(a);
}