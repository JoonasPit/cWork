# include <stdio.h>


int main (){
    char userword [15];
    int vowel = 0;

    printf("Anna sana: ");
    scanf("%s", userword);

    for(int i = 0; userword[i] != '\0'; i++ )
    {
        if(userword[i] == 'a' || userword[i] == 'e' || userword[i] == 'i' || userword[i] == 'o'
        || userword[i] == 'u' || userword[i] == 'y')
        {
            vowel++;
        }
    }
    printf("Sanassa on vokaaleja %d",vowel);

}