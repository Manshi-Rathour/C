#include<stdio.h>
void func1(int array[]);
void func2(int *ptr);
void func3(int arr[2][2]);

int main()
{
    int arr[2][2] = {{11,12},{13,14}};
    //func1(arr);
    //func2(arr);
    func3(arr);

    return 0;
}

/*void func1(int array[]){
    for(int i=0; i<2; i++){
        printf("Value at %d is %d\n", i, array[i]);
    }
}

void func2(int *ptr){
    for(int i=0; i<2; i++){
        printf("value at %d is %d\n", i, array[i]);
    }
}*/

void func3(int arr[2][2]){
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("Value at %d, %d is %d\n", i,j, arr[i][j]);
        }
    }
}