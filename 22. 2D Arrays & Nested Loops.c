#include <stdio.h>
#include <stdlib.h>

int main(){
    int nums[3][2] = {   /*this is 2d array*/
        {1, 2},
        {3, 4},
        {5, 6},
    };
    printf("%d\n", nums[0][0]);
    printf("%d\n", nums[1][1]);
    int i, j;
    for(i = 0; i < 3; i++){     /*nested loop means loop inside of loop*/
        for(j = 0; j < 2; j++){
            printf("%d,", nums[i][j]);
        }
        printf("\n");
    }
    return 0;
}
