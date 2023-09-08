#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 10000
#define h 0.01
#define INITIAL_X 1.0
#define INITIAL_Y 0.0
#define INITIAL_Z 0.0
#define sigma 10.0
#define rho 28.0
#define beta 8.0 / 3.0

double dxdt(double x, double y, double z) {return sigma * (y - x);}
double dydt(double x, double y, double z) {return x * (rho - z) - y;}
double dzdt(double x, double y, double z) {return x * y - beta * z;}

int main() {
    double x = INITIAL_X;
    double y = INITIAL_Y;
    double z = INITIAL_Z;
    FILE *output = fopen("edos.plt", "w");
    if (output == NULL) {
        perror("Erro ao criar arquivo de saída");
        return 1;
    }

    fprintf(output, "set title 'Plano de Fase 3D'\n");
    fprintf(output, "set xlabel 'x'\n");
    fprintf(output, "set ylabel 'y'\n");
    fprintf(output, "set zlabel 'z'\n");
    fprintf(output, "splot '-' using 1:2:3 with lines\n");

    for (int i = 0; i < N; i++) {
        fprintf(output, "%f %f %f\n", x, y, z);
        double x_next = x + h * dxdt(x, y, z);
        double y_next = y + h * dydt(x, y, z);
        double z_next = z + h * dzdt(x, y, z);
        x = x_next;
        y = y_next;
        z = z_next;
    }

    fprintf(output, "e\n");
    fclose(output);
    return 0;
}
