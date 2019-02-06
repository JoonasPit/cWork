#include <stdio.h>

int main(){
    FILE *openfile = fopen("file.txt","w");
        fprintf(openfile, "Swaptext");
    fclose(openfile);
    printf("Tiedostoon kirjoittaminen onnistui.\nOhjelma suljetaan.");
    return 0;
}