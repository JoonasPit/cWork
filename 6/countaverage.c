#include <stdio.h>

float main(void){
    /*Takes usergrade and counts gpa*/

    int user_grade = 0;
    int fullnr = 0;
    int i = 0;
    /*Explain program*/
    printf("Ohjelma laskee syötettyjen arvosanojen keskiarvon.\n");
    printf("Lopetus negatiivisella kokonaisluvulla.\n");
    /**/

    while(user_grade >= 0){
            printf("Anna arvosana (4-10): ");
            scanf("%d", &user_grade);
            if (user_grade>=4 && user_grade<=10){
            fullnr = (fullnr+user_grade);
            i++;   
            }
            else if(user_grade < 4 && user_grade>0 || user_grade > 10){
                printf("Pitää olla välillä(4-10): ");
            }
            else if (user_grade<0){
                break;
            }
            
            
    }
        float gpa = (float)fullnr/i;
        printf("Ohjelmaan on syötetty %d%s",i," arvosanaa.\n");
        printf("Arvosanojen keskiarvo: %.2f", gpa);
        return 0;

}