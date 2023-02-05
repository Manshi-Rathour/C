#include<stdio.h>

int square(int n);
int _square(int *n);

int main()
{
    //call by value
    int number = 4;
    square(number);
    printf("number is %d\n" , number);
     
    //call by reference
    _square(&number);
    printf("number is %d\n" , number);

    return 0;
}

int square(int n) {
    n = n * n;
    printf("square is %d\n" , n);
}

int _square(int *n) {
    *n = (*n) * (*n);
    printf("square is %d\n" , *n);
}