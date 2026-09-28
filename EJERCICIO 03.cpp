/* Ejercicio 3
   Solicita una medicion decimal de un sensor, la convierte
   explicitamente a entero y muestra cuanto valor decimal se pierde. */
#include <stdio.h>

int main(void) {
    float medicion;
    int medicion_entera;
    float perdida;

    printf("Ingrese la medicion decimal del sensor (ej. 18.9): ");
    scanf("%f", &medicion);

    medicion_entera = (int) medicion;          /* conversion explicita (truncamiento) */
    perdida = medicion - (float) medicion_entera;

    printf("\nValor original (decimal) : %.2f\n", medicion);
    printf("Valor convertido (entero): %d\n", medicion_entera);
    printf("Valor decimal perdido    : %.2f\n", perdida);

    return 0;
}

