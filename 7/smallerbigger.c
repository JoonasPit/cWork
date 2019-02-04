#include <stdio.h>
int checkbig(int, int, int);
int checksmall(int,int,int);


int main(){
    /*ask for 3 numbers check smallest and largest*/
    int user_num1,user_num2,user_num3;

    printf("Anna 1. luku: ");
    scanf("%d", &user_num1);
    printf("Anna 2. luku: ");
    scanf("%d", &user_num2);
    printf("Anna 3. luku: ");
    scanf("%d", &user_num3);
    int main_big;
    main_big = checkbig(user_num1,user_num2,user_num3);
    int main_small;
    main_small = checksmall(user_num1,user_num2,user_num3);
    
    printf("Syöttämistäsi luvuista suurin oli %d%s%d", main_big, " ja pienin oli ", main_small);
    
    return 0;
}

int checkbig(int user_num1, int user_num2, int user_num3){
    if (user_num1 > user_num2 && user_num1 > user_num3){
        return user_num1;
    }
    else if (user_num2 > user_num1 && user_num2 > user_num3){
        return user_num2;
    }
    else if (user_num3 > user_num1 && user_num3 > user_num2){
        return user_num3;
    }

}
int checksmall(int user_num1, int user_num2, int user_num3){
    if (user_num1 < user_num2 && user_num1 < user_num3){
        return user_num1;
    }
    else if (user_num2 < user_num1 && user_num2 < user_num3){
        return user_num2;
    }
    else if (user_num3 < user_num1 && user_num3 < user_num2){
        return user_num3;
    }

}