#include <stdio.h>
#define n 5
int find(int arr[])
{
    int length = n;
    int min = arr[0];
    for (int i = 0; i < length; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    for (int i = 0; i < length; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n Smallest element of array : %d ", min);
    return 0;
}
int input()
{
    int i, arr[n];
    for (i = 0; i < 5; i++)
    {
        printf("Enter no a[%d] :", i);
        scanf("%d", &arr[i]);
    }
    find(arr);
}
int main()
{
    input();
    return 0;
}
