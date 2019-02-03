#include <stdio.h>

int main(void){
    float userdeci;
    int usernumber;
    /*Ask and assign integer first */
    printf("Anna kokonaisluku: ");
    scanf("%d", &usernumber);
    /*Ask and assign decimal next */
    printf("Anna desimaaliluku: ");
    scanf("%f", &userdeci);

    printf("Antamasi kokonaisluku oli: %d %s", usernumber, "\n");
    printf("Syöttämäsi desimaaliluku kahden desimaalin tarkkuudella: %.2f %s", userdeci, "\n");
    return 0;

}