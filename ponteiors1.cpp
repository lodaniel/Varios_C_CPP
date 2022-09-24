// Exemplo retirado de: https://www.youtube.com/watch?v=8ecXNd4Cv3U
#include <iostream>

int main(){
int x = 2049;
int *px = &x;
printf("O tamanho de x : %d byte(s)\n", sizeof(int));
printf("O valor de x   : %d\n", x);
printf("O endereco de x: %d\n", px);
printf("O ponteiro de x: %d\n", *px);
printf("Soma de x+1    : %d\n", px+1);
printf("Soma de px+1   : %d\n", *(px+1));

char *y = (char*)px;
printf("O tamanho de y : %d byte(s)\n", sizeof(char));
printf("O endereco de y: %d\n", y);
printf("O valor de y   : %d\n", *y);
printf("Soma de y+1    : %d\n", y+1);
printf("Soma de *(y+1) : %d\n", *(y+1));
return 0;
}