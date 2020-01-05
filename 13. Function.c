#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Top\n");
    sayHi("");
    printf("Bottom\n");
    sayHi_1("Mike\n");
    sayHi_1("Tom\n");
    sayHi_1("Oscar\n");
    sayHi_age("Mike", 40);
    sayHi_age("Tom", 23);
    sayHi_age("Oscar", 70);
    
    return 0;
}

void sayHi(){
    printf("Hello User\n");
}

void sayHi_1(char name[]){
    printf("Hello %s", name);
}

void sayHi_age(char name[], int age){
    printf("Hello %s, you are %d\n", name, age);
}