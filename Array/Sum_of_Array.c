#include<stdio.h>

int sum_of_Array(int arr[]);

int main()
{
    int array[] = {1,2,3,4};
    sum_of_Array(array);
    printf("%d", sum_of_Array(array));

    return 0;
}

int sum_of_Array(int arr[]){

    int sum = 0;

    for(int i=0; i<4; i++){
        sum += arr[i];
    }
    return sum;
}