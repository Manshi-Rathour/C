#include<stdio.h>

int main()
{
    int arr[5][5] = {{8,3,9,0,10}, {3,5,17,1,1}, {2,8,6,23,1}, {15,7,3,2,9}, {6,14,2,6,0}};
    int sum = 0;

    printf("Array:\n");
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    printf("Row total : ");
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            sum = sum + arr[i][j];
        }
        printf("%d\t", sum);
        sum = 0;
    }
    printf("\nColumn total : ");
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            sum = sum + arr[j][i];
        }
        printf("%d\t", sum);
        sum = 0;
    }

    return 0;
}