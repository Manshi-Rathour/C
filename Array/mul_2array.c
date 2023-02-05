#include<stdio.h>

int main()
{
    int arr1[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
    int arr2[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
    int arr3[3][3];
    
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            arr3[i][j] = 0;
            for(int k=0; k<3; k++)
            {
                arr3[i][j] = arr3[i][j] + arr1[i][k] * arr2[k][i];
            }
            printf("%d", arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}