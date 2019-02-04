#include <stdio.h>
/*function declarations*/
int sumfunction(int, int);
int dedfunction(int,int);   
int timfunction(int, int);

int main(){
    /* Ask for user input */
    int user_input,user_number1,user_number2;
    /* loop for input */
    while(user_input >= 0){
    printf("1: kahden luvun summa\n2: kahden luvun erotus\n3: kahden luvun tulo\n<0: ohjelman lopetus\n");
    printf("Valitse laskutoimitus: ");
    scanf("%d", &user_input);
    /* Check break condition */
    if (user_input >=0 && user_input <=3){
        printf("Syötä ensimmäinen luku: ");
        scanf("%d", &user_number1);
        printf("Syötä toinen luku: ");
        scanf("%d", &user_number2);
        /* check input */      
            switch (user_input){
                case 1:{
                    sumfunction(user_number1,user_number2);
                    continue;
                }
                case 2:{
                    dedfunction(user_number1,user_number2);
                    continue;
                }
                case 3:{
                    timfunction(user_number1,user_number2);
                    continue;
                }           
                default:
                break;
                    }
        }        
    else{
        printf("Ohjelma lopetetaan...\n");
        break;
    }
    }
        return 0;
    }
    
    /* functions for calculations */
     /* print result */
     /*addition*/
int sumfunction(int user_number1, int user_number2){
    int addsum = user_number1 + user_number2;
    printf("%d%s%d%s%d%s",user_number1,"+",user_number2,"=", addsum,"\n");
    return 0;
}
    /*deduction*/
int dedfunction(int user_number1, int user_number2){
    int dedsum = user_number1 - user_number2;
    printf("%d%s%d%s%d%s",user_number1,"-",user_number2,"=", dedsum,"\n");
    return 0;
}
    /*multiply*/
int timfunction(int user_number1, int user_number2){
    int timsum = user_number1 * user_number2;
    printf("%d%s%d%s%d%s",user_number1,"*",user_number2,"=", timsum,"\n");
    return 0;
}

   
   