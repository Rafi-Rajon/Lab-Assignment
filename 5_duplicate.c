
#include <stdio.h>

int main()
{
    int arr[] = {5, 40, 1, 40, 100000, 1, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int visited[n];
    int foundDuplicate = 0;


    for (int i=0; i<n; i++)
    {
        visited[i] = 0;
    }

    for (int i=0; i<n; i++)
    {
        if (visited[i] == 1)
        {
            continue;
        }

        int count = 1;
        for (int j=i+1; j<n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        if (count > 1)
        {
            printf("%d ", arr[i]);
            foundDuplicate = 1;
        }
    }

    if (!foundDuplicate)
    {
        printf("-1");
    }

    return 0;
}
