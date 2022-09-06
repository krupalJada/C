#include <stdio.h>

int main()
{
    char str[100], a[100];
    
    int j, i,k = 0;

    printf("\n Enter a string :");
    gets(str);
     
     printf("\n str : %s",str);

    // Calculating string length
    for (i = 0; str[i] != '\0'; i++);

        printf("\n length : %d",i);

    for (j = i-1 ; j >=0; j--)
    {
        a[j] = str[k];
        k++;
    }
        a[j] = '\0';        
    printf("\n reverse str : %s", a);
    return 0;
}