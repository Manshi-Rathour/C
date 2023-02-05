//  Quick Quiz:
// Given two numbers a and b,  add them then subtract them and assign them to a and b using call by reference.

// a = 4
// b = 3

// after running the function, the values of a and b should be:
// a = 7
// b = 1

#include<stdio.h>

void swap(int *x, int *y);

int main()
{
    int a = 4;
    int b = 3;
    printf("Value of a is %d\n", a);
    printf("Value of b is %d\n", b);
    
    swap(&a, &b);
    printf("New value of a and b is %d and %d", a, b);

    return 0;
}

void swap(int *x, int *y){
    int d = *x + *y; //c=7
    int c = *x - *y; //d=1
    
    int t;
    t = d;
    d = c;
    c = t;
    
    *x = c;
    *y = d;
}
