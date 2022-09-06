#include <stdio.h>
int prime()
{
    int i, n;
    printf("Enter n :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % n == 0 && i % 1 == 0)
        {
            printf("\n this is prime no : %d", i);
        }
        else
        {
            return 0;
        }
    }
}
int main()
{
    prime();
    return 0;
}