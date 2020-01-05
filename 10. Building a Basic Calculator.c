#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("Answer: %d\n", num1 + num2);
    
    double num_1;
    double num_2;
    printf("Enter first number: ");
    scanf("%lf", &num_1);
    printf("Enter second number ");
    scanf("%lf", &num_2);
    
    printf("Answer: %f", num_1 + num_2);
    
    return 0;
}