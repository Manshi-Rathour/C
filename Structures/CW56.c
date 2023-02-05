#include<stdio.h>
#include<string.h>

struct address{
    int house_no;
    char block;
    char city[10];
    char state[10];
};

void printAdd(struct address add);

int main()
{
    struct address ads[5];
    //input
    printf("enter info for 1st person :\n");
    scanf("%d", &ads[0].house_no);
    scanf("%c", &ads[0].block);
    scanf("%s", &ads[0].city);
    scanf("%s", &ads[0].state);
    
    printf("enter info for 2nd person :\n");
    scanf("%d", &ads[1].house_no);
    scanf("%c", &ads[1].block);
    scanf("%s", &ads[1].city);
    scanf("%s", &ads[1].state);

    printf("enter info for 3rd person :\n");
    scanf("%d", &ads[2].house_no);
    scanf("%c", &ads[2].block);
    scanf("%s", &ads[2].city);
    scanf("%s", &ads[2].state);
    
    printAdd(ads[0]);
    printAdd(ads[1]);
    printAdd(ads[2]);

    return 0;
}

void printAdd(struct address add){
    printf("Address is %d, %c, %s, %s\n", add.house_no, add.block, add.city, add.state);
}

