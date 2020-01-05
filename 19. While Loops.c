#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int index = 1;    /*loop starts from here */
    while(index <= 5){  /*go till 5*/
        printf("%d\n", index);   /*prints it out*/
        index++;      /*by increasing it one by one*/
    }
    
    int index_1 = 6;   /*do while loop starts looping then it checks the condition*/
    do {
        printf("%d\n", index_1);
        index++;
    }while(index_1 <= 5);
    
    return 0;
}
