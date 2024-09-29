#include<stdio.h>

int main()
{
    int arr[] = { 1, 423, 6, 46, 34, 23, 13, 53, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int i, max=arr[0], min=arr[0];

    for(i=0; i<n; i++)
    {
        if(arr[i]<min)
            min=arr[i];
        if(arr[i]>max)
            max=arr[i];
    }

    printf("%d is minimum\n",min);
    printf("%d is maximum\n",max);

    return 0;
}
