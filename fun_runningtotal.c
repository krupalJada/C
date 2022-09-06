#include <stdio.h>
#define n 5
int running_total(int arr[])
{
    int new[n];
    for (int i = 0; i < n; i++)
    {
        printf("\n%d ", arr[i]);
        if (i != 0)
        {
            new[i] = arr[i] + arr[i - 1];
            printf("  %d",new[i]);
        }
    }
}
int arr()
{
    int i, arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter element a[%d] :", i);
        scanf("%d", &arr[i]);
    }
    running_total(arr);
}
int main()
{
    arr();
    return 0;
}