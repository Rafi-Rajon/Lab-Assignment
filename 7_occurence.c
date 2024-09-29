#include <stdio.h>

int main()
{
    int N = 7;
    int X =42;
    int arr[] = {1, 1, 2, 2, 2, 2, 3};
    int count = 0;

    for (int i=0; i<N; i++)
    {
        if (arr[i] == X)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
