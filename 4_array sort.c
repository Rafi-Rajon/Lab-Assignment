#include <stdio.h>

int main()
{
    int arr[] =  {5, 2, 4,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int i, j, temp;

    for (i=0; i<n; i++)
    {
        for (j= i+1; j<n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
