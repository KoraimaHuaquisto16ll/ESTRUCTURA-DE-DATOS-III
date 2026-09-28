#include <stdio.h>

int main(void) {
    int n;
    long long operaciones_lineales;
    long long operaciones_cuadraticas;
    double razon;

    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("n debe ser mayor que cero.\n");
        return 1;
    }

    operaciones_lineales = 0;
    for (int i = 0; i < n; i++) {
        operaciones_lineales++;
    }

    operaciones_cuadraticas = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            operaciones_cuadraticas++;
        }
    }

    razon = (double)operaciones_cuadraticas /
            operaciones_lineales;

    printf("\nOperaciones O(n): %lld\n",
           operaciones_lineales);
    printf("Operaciones O(n^2): %lld\n",
           operaciones_cuadraticas);
    printf("Razon O(n^2) / O(n): %.2f\n", razon);

    return 0;
}
