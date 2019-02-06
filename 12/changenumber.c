#include<stdio.h>

void muuta_lukua(int x);


int main()
{
  int x;
  printf("Anna luku x: ");
  scanf("%d", &x);
  printf("Pääohjelmassa: x = %d\n", x);
  muuta_lukua(x);
  printf("Pääohjelmassa: x = %d\n", x);
} 
void muuta_lukua(int x){
    int y = x;
    y = y +3;
    printf("Aliohjelmassa: x = %d%s", y,"\n");

}