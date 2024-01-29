#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Declaração de um array
    int *p = arr; // Ponteiro para o início do array
    printf("Usando índices de array:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    printf("\nUsando aritmética de ponteiros:\n");
    for (int i = 0; i < 5; i++) {
        // Aritmética de ponteiros para acessar elementos
        printf("*(p + %d) = %d\n", i, *(p + i));
    }
    return 0;
}
