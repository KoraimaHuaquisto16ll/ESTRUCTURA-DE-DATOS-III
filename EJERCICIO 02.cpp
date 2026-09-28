/* Ejercicio 2
   Registra la informacion basica de una observacion de un conjunto
   de datos: identificador, edad, valor promedio, categoria y validez. */
#include <stdio.h>

int main(void) {
    int identificador;
    int edad;
    float valor_promedio;
    char categoria;
    int es_valido; /* 1 = valido, 0 = no valido (uso de int como booleano) */

    printf("Identificador de la observacion: ");
    scanf("%d", &identificador);

    printf("Edad: ");
    scanf("%d", &edad);

    printf("Valor promedio de la variable: ");
    scanf("%f", &valor_promedio);

    printf("Categoria (una letra): ");
    scanf(" %c", &categoria);

    printf("Estado de validez del registro (1 = valido, 0 = no valido): ");
    scanf("%d", &es_valido);

    printf("\n--- Observacion registrada ---\n");
    printf("ID           : %d\n", identificador);
    printf("Edad         : %d\n", edad);
    printf("Valor prom.  : %.2f\n", valor_promedio);
    printf("Categoria    : %c\n", categoria);
    printf("Valido       : %s\n", es_valido ? "Si" : "No");

    return 0;
}

