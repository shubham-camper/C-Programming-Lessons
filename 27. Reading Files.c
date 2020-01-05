#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char line[255];
    FILE * fpointer = fopen("employees.txt", "r"); /*this function will read the file*/
    
    fgets(line, 255, fpointer);   /*it will get the first line of the list*/
    printf("%s", line);   /*and will print it out*/
    printf("%s", line);    /*this will print out the second element of the list*/
    fclose(fpointer);
    return 0;
    
}