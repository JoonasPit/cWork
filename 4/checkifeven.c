#include <stdio.h>

int main(void){
    /*Checks if input number is even*/
    int usernumber;
    int check = 2;
    printf("Anna kokonaisluku: ");
    scanf("%d", &usernumber);
    if (usernumber%check != 0){
        printf("Luku on 1\n");
    }
    else{
        printf("Luku on 0\n");       
    }
    
}