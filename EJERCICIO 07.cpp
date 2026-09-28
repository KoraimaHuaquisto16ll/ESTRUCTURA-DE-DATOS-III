/* Ejercicio 7
   Un conjunto de datos se acepta si tiene al menos 100 observaciones
   validas y un porcentaje de datos completos >= 70%. */
#include <stdio.h>

int main(void) {
    int num_observaciones;
    float porcentaje_completos;

    printf("Numero de observaciones validas: ");
    scanf("%d", &num_observaciones);

    printf("Porcentaje de datos completos (%%): ");
    scanf("%f", &porcentaje_completos);

    if (num_observaciones >= 100 && porcentaje_completos >= 70.0f) {
        printf("\nEl conjunto de datos CUMPLE las condiciones minimas para ser analizado.\n");
    } else {
        printf("\nEl conjunto de datos NO cumple las condiciones minimas para ser analizado.\n");
    }

    return 0;
}

