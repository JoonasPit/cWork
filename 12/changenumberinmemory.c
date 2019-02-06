#include <stdio.h>

void muuta_lukua(int *x);


int main()
{
  int x;
  printf("Anna luku x: ");
  scanf("%d", &x);
  printf("Pääohjelmassa: x = %d\n", x);
  muuta_lukua(&x);
  printf("Pääohjelmassa: x = %d\n", x);
}

void muuta_lukua(int *x){ 
    for (int i=0;i<3;i++){
    ++*x;
}
    printf("Aliohjelmassa: x = %d\n", *x);
}
