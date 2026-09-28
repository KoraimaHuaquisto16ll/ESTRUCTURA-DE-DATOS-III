/* Ejercicio 4
   Solicita el numero de registros procesados por dos algoritmos y
   calcula suma, diferencia, producto, division entera y residuo. */
#include <stdio.h>

int main(void) {
    int a, b;

    printf("Registros procesados por el algoritmo 1: ");
    scanf("%d", &a);

    printf("Registros procesados por el algoritmo 2: ");
    scanf("%d", &b);

    printf("\n--- Resultados ---\n");
    printf("Suma            : %d\n", a + b);
    printf("Diferencia      : %d\n", a - b);
    printf("Producto        : %d\n", a * b);

    if (b != 0) {
        printf("Division entera : %d\n", a / b);
        printf("Residuo         : %d\n", a % b);
    } else {
        printf("Division entera : indefinida (division por cero)\n");
        printf("Residuo         : indefinido (division por cero)\n");
    }

    return 0;
}

