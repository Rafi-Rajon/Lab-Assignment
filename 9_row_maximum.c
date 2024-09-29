#include<stdio.h>

int main()
{
    int arr[4][4] = { {0, 0, 0, 1},
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {0, 0, 0, 0}
    };

    int row = -1 ;
    int maxCount = 0 ;

    for(int i=0 ; i<4 ; i++)
    {
        int count = 0 ;
        for(int j=0 ; j<4 ; j++ )
        {
            if(arr[i][j] == 1)
            {
                count++ ;
            }
        }
        if(count > maxCount)
        {
            maxCount = count ;
            row = i ;
        }
    }

    printf("Index of row with maximum is %d",row);

    return 0;
}

