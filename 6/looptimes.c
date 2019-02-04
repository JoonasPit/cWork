#include <stdio.h>

int main(void){
    int rounds_user;
    int b = 1;
    
    printf("Anna kokonaisluku: ");
    scanf("%d", &rounds_user);

    for (int i =1;i<=rounds_user;i++){
        b = i * b;
    }
    printf("Luvun %d%s%d%s", rounds_user, " on " ,b,"\n");
}