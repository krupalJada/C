#include <stdio.h>
int main()
{
    char str[10], a[10];
    int i, j,k =0;
    printf("Enter str :");
    gets(str);
    printf("Enter 2nd str :");
    gets(a);
    for (i = 0; str[i] != '\0'; i++);  // length of 1st string
    for (j = 0; a[j] != '\0'; j++)     // length of 2nd string
    
    {
        str[i] = a[j];                 // 2nd string 1st element = 1st string null element bcz last element is null
        i++;
    }
    str[i] = '\0';                    // 1st strding last element is null
    printf(" \n new str : %s", str);       
    return 0;
}
