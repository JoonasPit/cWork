#include <stdio.h>

int main(){
    int num1,num2,num3,num4;
    char car1,car2,car3;
    int sum = 0;
    FILE *openfile = fopen("file.txt","r");
        if (openfile== NULL){
            printf("Pieleen meni");
            return 0;
        }
        else
        {
        fscanf(openfile, "%d%c%d%c%d%c%d" ,&num1,&car1,&num2,&car2,&num3,&car3,&num4);
        fclose(openfile);
        }
        
    printf("Tiedostosta luvut.s löytyneet luvut:\n%d%s %d%s %d%s%d", num1,",",num2,",",num3," ja ",num4);
    sum = num1 + num2 + num3+ num4;
    printf("\nLukujen summa: %d",sum);
    return 0;
}