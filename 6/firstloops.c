#include <stdio.h>

int main(void){
    int rounds_user;

    printf("Anna kokonaisluku: ");
    scanf("%d", &rounds_user);

    for (int i =1;i<=rounds_user;i++){
        printf("%d%s", i,"\n");
    }

}