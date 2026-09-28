/* Ejercicio 9
   Clasifica una temperatura ambiental como Congelacion, Frio o Templado. */
#include <stdio.h>

int main(void) {
    float temperatura;

    printf("Ingrese la temperatura ambiental (C): ");
    scanf("%f", &temperatura);

    if (temperatura < 0) {
        printf("Clasificacion: Congelacion\n");
    } else if (temperatura <= 20) {
        printf("Clasificacion: Frio\n");
    } else {
        printf("Clasificacion: Templado\n");
    }

    return 0;
}

