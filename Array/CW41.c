#include<stdio.h>

int main()
{   
    float price[3];
    printf("Enter 3 numbers :");
    scanf("%f" , &price[0]);
    scanf("%f" , &price[1]);
    scanf("%f" , &price[2]);

    printf("final cost of 1 item : %f\n", price[0] + (0.18 * price[0]));
    printf("final cost of 2 item : %f\n", price[1] + (0.18 * price[1]));
    printf("final cost of 3 item : %f\n", price[2] + (0.18 * price[2]));

    return 0;
}