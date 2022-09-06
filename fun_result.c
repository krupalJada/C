// without declare global variable

#include<stdio.h>
int output(int a1,int a2,int a3,float sum,float pers){
    printf("s1\ts2\ts3\ttotal\tper\tgrade");
    printf("\n%d\t%d\t%d\t%.0f\t%.2f\t",a1,a2,a3,sum,pers);
    if (pers>=90)
        printf("A");
    else if (pers<90 && pers>=75)
        printf("B");
    else if (pers<75 && pers>=60)
        printf("c");
    else if (pers<60 && pers>=35)
        printf("d");
    else
        printf("fail");
    return 0;
}
int procc(int x1,int x2,int x3){
    float total,per;
    total=x1+x2+x3;
    per = (total/3);

    output(x1,x2,x3,total,per);

    return 0;    
}
int  input(){
    int s1,s2,s3;
    printf("Enter s1:");
    scanf("%d",&s1);
    printf("Enter s2:");
    scanf("%d",&s2);
    printf("Enter s3:");
    scanf("%d",&s3);
    procc(s1,s2,s3);
}
int main(){

    input();

    return 0;
}

