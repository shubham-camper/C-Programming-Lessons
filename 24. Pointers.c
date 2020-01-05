#include <stdio.h>
#include <stdlib.h>

int main(){  /*pointers are also memory addresses or the variables where the memory addresses can be stored*/
    int age = 30;
    int * pAge = &age;
    double gpa = 3.4;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;
    
    return 0;
}