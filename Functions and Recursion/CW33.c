#include<stdio.h>

int calPercentage(int sci , int math , int sans);

int main() 
{
    int sci = 96;
    int math = 98;
    int sans = 94;
    printf("percentage is %d" , calPercentage(sci , math , sans));
    return 0;
}

int calPercentage(int sci , int math , int sans){
    return (sci + math + sans)/3;
}