#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main(){
    /*struct is a kind of datatype used to store the data*/
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy( student1.name, "Jim");
    strcpy( student1.major, "Business");
    /*student1 struct is created now you can call the information as you like*/
    struct Student student2;
    student2.age = 20;
    student2.gpa = 2.5;
    strcpy( student2.name, "Pam");
    strcpy( student2.major, "Art");
    printf("%s\n", student1.name);
    printf("%f\n", student1.gpa);
    printf("%s\n", student2.name);
    return 0;
}