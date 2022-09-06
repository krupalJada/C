#include<stdio.h>
void new(){
    printf("\n new function called");
}
void main()
{
    printf("\n before function called");
    new();
    printf("\n after function called");
}