#include <stdio.h>

int main()
{
// Exemplo sobre utilidade pratica de ponteiros:
// Extraído de: https://www.youtube.com/watch?v=Agm01m4s3wo

int a = 0;

// Passando valores
void x(int y) { y = 2; }
x(a);
printf("Passando valores: %d\n", a); // a = 0

// Passando ponteiros
void r(int *s) { *s = 2; }
int *a_ptr = &a;
r(a_ptr);
printf("Passando ponteiros: %d\n", a); // a = 2;

return 0;
}
