#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i;
    for(i = 1; i <= 5; i++){
        printf("%d\n",  i);
    }
    
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    
    int k;
    for(k = 0; k < 6; k++){
        printf("%d\n", luckyNumbers[k]);
    }
     
    return 0;
}