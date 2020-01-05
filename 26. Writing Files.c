#include <stdio.h>
#include <stdlib.h>

int main(){
    
    FILE * fpointer = fopen("employees.txt", "w"); /*file employees.txt will be created or written*/
    
    
    fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting"); /*these statement will be entered inside the employees.txt file*/
    
    FILE * fpointer_1 = fopen("employees.txt", "a");   /*employee kelly will be added in the employeefile*/
    
    fprintf(fpointer_1, "\nKelly, Customer Service");
    
    fclose(fpointer);
    return 0;
    
}