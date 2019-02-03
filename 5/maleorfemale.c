#include <stdio.h>

int main(void){
    char usergen;
    int userage;
    printf("Oletko mies vai nainen (m/n): ");
    scanf("%c", &usergen);
    printf("Anna ikäsi: ");
    scanf("%d", &userage);
    if (userage <= 55 && userage >= 0){
        if (usergen == 'm'){
            printf("Olet mies parhaassa iässä\n");
        }
        else if (usergen == 'n'){
            printf("Olet neito kauneimmillasi\n");
        }
    }
    else if (userage>=56 && userage<= 100){
        if(usergen == 'm'){
            printf("Olet viisas mies!\n");
        }
        else if(usergen == 'n'){
            printf("Näytät nuorelta ikäiseksesi\n");
        }
        
    }
    return 0;
}