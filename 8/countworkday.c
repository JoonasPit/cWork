#include <stdio.h>
int main(){
    int user_days =0 ;
    float taulukko[30];
    int where = 0;
    float allcombined = 0;
    float averagehours= 0;

    printf("Ohjelma laskee yhteen haluamasi ajanjakson aikana\ntehdyt työtunnit sekä keskimääräisen työpäivän pituuden.\n");
    printf("Kuinka monta päivää: ");
    scanf("%d",&user_days);
    if (user_days <= 30){
        for(int i = 1; i <= user_days; i++){
            printf("Anna %d%s", i ,". päivän työtunnit: ");
            scanf("%f", &taulukko[where]);
            allcombined = allcombined + taulukko[where];
            where++;
        }
        }
        
        printf("Tehdyt työtunnit yhteensä: %.1f%s", allcombined,"\n");
        averagehours =allcombined/user_days;
        printf("Keskimääräinen työpäivän pituus: %.1f%s", averagehours,"\n");
        printf("Syötetyt tunnit: ");
        for (int c =0; c < user_days; c++){
        printf("%.1f%s", taulukko[c], " ");
        }
    return 0;
}