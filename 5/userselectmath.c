#include <stdio.h>

int main(){
    int userselect,user_number1,user_number2;
    int result;
    char selection = ' ';


    printf("1: vähennyslasku\n2: yhteenlasku\n3: kertolasku\n");
    printf("Valitse toiminto: ");
    scanf("%d", &userselect);
    printf("Anna eka luku: ");
    scanf("%d", &user_number1);
    printf("Anna toinen luku: ");
    scanf("%d", &user_number2);

    switch (userselect){
        case 1:{
            result = user_number1 - user_number2;
            selection = '-';
            break;
        }
        case 2:{
            result  = user_number1 + user_number2;
            selection = '+';
            break;
        }
        case 3:{
            result = user_number1 * user_number2;
            selection = '*';
            break;
        }       
        default:
            break;
    }
    
    printf("%d %c %d %s %d",user_number1,selection,user_number2, "=" ,result);
    
    return 0;
}