#include <stdio.h>
#include <stdlib.h>

int main()
{
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    printf("%d\n", luckyNumbers[0]);
    /*it will print out the first element of the array*/
    printf("%d\n", luckyNumbers[2]);
    /*you can also reassign the values*/
    luckyNumbers[1] = 200;
    printf("%d\n", luckyNumbers[1]);
    /*you can also create the array first and then pass the values later*/
    int luckyNumbers_1[10];
    luckyNumbers_1[1] = 80;
    luckyNumbers_1[0] = 90;
    printf("%d\n", luckyNumbers_1[1]);
    printf("%d", luckyNumbers_1[0]);
    
    char pharse[] = "Giraffe Academy";
    char pharse_1[20] = "Array";
    
    return 0;
}
