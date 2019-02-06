#include <stdio.h>

int main(){
char user_firstname[15];
char user_lastname[20];

char total[13];
printf("Ohjelma tallentaa etunimesi ja sukunimesi tiedostoon.\n");

printf("Syötä etunimesi: ");
scanf("%s", user_firstname);
printf("Syötä sukunimesi: ");
scanf("%s", user_lastname);
printf("Tiedosto johon haluat tallentaa nimesi: ");
scanf("%s", total);


FILE *openfile = fopen(total,"w");

fprintf(openfile,"%s %s",user_firstname,user_lastname);
fclose(openfile);
printf("Tallennus onnistui!");
return 0;
}