#include<stdio.h>
#include<string.h>

struct student {
    int id;
    int marks;
    char name[20];
} Manshi, Manjesh, Mayank;

// struct student Manshi, Mansjesh, Mayank;

int main()
{
    Manshi.id = 1;                  
    Manjesh.id = 2;                       // Manshi = {1, 50, "Manshi Rathour"}                   
    Mayank.id = 3;  
    Manshi.marks = 50;
    Manjesh.marks = 49;
    Mayank.marks = 48;
    strcpy(Manshi.name, "Manshi Rathour");
    strcpy(Manjesh.name, "Manjesh Rathour");
    strcpy(Mayank.name, "Mayank Rathour");

    printf("Manshi's id is :%d\n", Manshi.id);
    printf("Manjesh's marks is :%d\n", Manjesh.marks);
    printf("Mayank's full name is :%s\n", Mayank.name);

    return 0;
}