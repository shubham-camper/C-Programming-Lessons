#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Getting user input*/
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    /*printf will ask your age and and scanf takes your age and stores it into the variable age with &age */
    printf("You are %d years old\n", age);
    /* then it will print out your age*/
    
    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is %f\n", gpa);
    
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("Your grade is %c", grade);
    
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Your name is %s", name);
    
    char name_1[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("Your name is %s", name);
    /*use fgets for getting multiple words*/
    return 0;
}
