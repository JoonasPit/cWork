#include <stdio.h>

int main(void){
    /*Checks if input number is even again*/
    int usernumber;
    int check = 2;
    printf("Anna kokonaisluku: ");
    scanf("%d", &usernumber);
    if (usernumber%check != 0){
        printf("Luku %d%s",usernumber, " on pariton.\n");
    }
    else{
        printf("Luku %d%s",usernumber, " on parillinen.\n");
    }
    
}