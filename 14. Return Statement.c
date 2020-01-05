#include <stdio.h>
#include <stdlib.h>

double cube(double num){
    double result = num * num * num;
    /*this function will cube the number and return the result which is the cube of the number entered*/
    return result;
    
}

/*same can be done this way*/
double cube_1(double num){
    return num * num * num;
}

/*this can also be done as passing the function first and then passing the description later*/
double cube_2(double num);

int main(){
    printf("Answer: %f\n", cube(3.0));
    printf("Answer: %f\n", cube(7.0));
    printf("Answer: %f\n", cube_1(2.0));
    printf("Answer: %f\n", cube_1(5.0));
    printf("Answer: %f\n", cube_2(4.0));
    
    return 0;
}

double cube_2(double num){
    return num * num * num;
}

