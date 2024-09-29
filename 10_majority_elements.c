#include <stdio.h>

int main()
{
    int arr[] = {3, 3, 4, 2, 4, 4, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i=0; i<n; i++)
    {
        int count = 0;

        for (int j=0; j<n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count > n/2)
        {
            printf("%d ",arr[i]);
            return 0;
        }
    }

    printf("-1");

    return 0;
}
