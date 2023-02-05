#include<stdio.h>

float convTemp(float celsius);

int main()
{
    float far = convTemp(42.0);
    printf("far :%f" , far);
    return 0;
}

float convTemp(float celsius) {
    float far = celsius * (9.0/5.0) + 32;
    return far;
}