#include <stdio.h>

int main()
{
    int arr[] = {20, 10, 8, 6, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i=0; i<n; i+=2)
    {

        if (i>0 && arr[i] < arr[i-1])
        {
            int temp = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = temp;
        }
        if (i < n-1 && arr[i] < arr[i+1])
        {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }

    for (int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

