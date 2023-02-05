#include<stdio.h>
#include<string.h>

struct complex {
    int real;
    int img;
};

int main()
{
    struct complex N1 = {5, 10};
    struct complex *ptr = &N1;

    printf("Real part of no. is :%d\n", ptr->real);
    printf("Img part of no. is :%d\n", ptr->img);

    return 0;
}
