#include<stdio.h>

int main()
{
    int arr[] = { 1, 423, 6, 46, 34, 23, 13, 53, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int rev_arr[n];

    for(int i=0; i<n; i++)
    {
       rev_arr[n-i-1] = arr[i];
    }

    printf("Original array:");
    for(int i=0; i<n; i++)
    {
       printf("%d ",arr[i]);
    }

    printf("\nReverse array:");
    for(int i=0; i<n; i++)
    {
       printf("%d ",rev_arr[i]);;
    }

    return 0;
}
