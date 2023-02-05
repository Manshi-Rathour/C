#include<stdio.h>
#include<stdlib.h>

int main()
{
    float *ptr;
    ptr = (float *)malloc(5 * sizeof(float));

    ptr[0] = 12.00;
    ptr[1] = 15.20;
    ptr[2] = 25.63;
    ptr[3] = 66.00;
    ptr[4] = 45.54;

    for(int i=0; i<5; i++){
        printf("%f\n", ptr[i]);
    }
    free(ptr);
    return 0;
}