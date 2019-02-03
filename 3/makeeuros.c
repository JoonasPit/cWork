#include <stdio.h>

int main(void){
    /*notes mostly done for learning purposes*/
    /*Takes user input in markka and translates it into euros.*/
    /*uservariables*/

    float usermarkka;
    float ineuros;
    float rate = 5.94573;

    printf("Anna jokin markkamäärä: ");
    scanf("%f", &usermarkka);
    ineuros = usermarkka / rate;
    /* printfunction*/
    printf("Markat euroina: %.2f%s", ineuros,"\n");
    return 0;
}