#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%d\n", 500);
    printf("My favorite %s is %d\n", "number", 500);
    printf("My favorite %s is %f\n", "number", 500.98754);
    int favNum = 90;
    printf("My favorite %s is %d\n", "number", favNum);

    int favNum_1 = 90;
    char myChar = 'i';
    printf("My favorite %c is %f", myChar, favNum_1);

    return 0;
}
