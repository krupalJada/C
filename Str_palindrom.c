#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[20];
    int i, len,j, temp = 0;
    printf("Enter a string:");
    scanf("%s", str);

    for(j=0;str[j] !='\0';j++);

        printf("\n length :%d",j);
    len = j;
    for (i = 0; i < len; i++)
    {
        if (str[i] == str[len - i - 1])
        {
            temp = 1;
        }
            break;
    }
    if (temp == 1)
    {
        printf("\n String is a palindrome");
    }
    else
    {
        printf("\n String is not a palindrome");
    }
    return 0;
}
