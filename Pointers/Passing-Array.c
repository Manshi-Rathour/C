#include<stdio.h>

void display(int *ptr);

int main()
{
    int arr[] = {1,2,3,4};
    display(arr);

    return 0;
}

void display(int *ptr){
    for(int i=0; i<4; i++){
  printf("%d", *(ptr + i));
    }
}