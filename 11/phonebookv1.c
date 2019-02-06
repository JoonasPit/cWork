#include <stdio.h>

int main(){
    int num1;
    char user_first[20];
    char user_last[20];
    char user_phone[20];

    printf("Anna etunimi: ");
    scanf("%s",user_first);
    printf("Anna sukunimi: ");
    scanf("%s",user_last);
    printf("Anna puhelinnumero: ");
    scanf("%s",user_phone);

    FILE *searchfi = fopen("luettelo.txt","r+b");
    if (scanf== NULL)
        {
            printf("Pieleen meni");
        }
        else
        {
        fscanf(searchfi,"%d",&num1);
        fseek(searchfi,1-1,SEEK_SET);
        fprintf(searchfi,"%d",++num1);
        fclose(searchfi);
        }


    FILE *writefile = fopen("luettelo.txt","a");

    fprintf(writefile,"\n%s %s %s",user_first,user_last,user_phone);
    fclose(writefile);
    printf("Tietojen tallennus onnistui.");
    return 0;
}