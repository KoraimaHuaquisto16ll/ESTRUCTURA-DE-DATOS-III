/* Ejercicio 8
   Para incorporar una observacion se requiere edad >= 18 y que el
   registro haya sido validado. */
#include <stdio.h>

int main(void) {
    int edad;
    int validado; /* 1 = si, 0 = no */

    printf("Edad del individuo: ");
    scanf("%d", &edad);

    printf("El registro fue validado? (1 = si, 0 = no): ");
    scanf("%d", &validado);

    if (edad >= 18 && validado == 1) {
        printf("\nLa observacion PUEDE incorporarse al conjunto de datos.\n");
    } else {
        printf("\nLa observacion NO puede incorporarse al conjunto de datos.\n");
    }

    return 0;
}

