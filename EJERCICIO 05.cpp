/* Ejercicio 5
   Distribuye un numero total de registros entre varios nodos de
   procesamiento: registros por nodo y registros sobrantes. */
#include <stdio.h>

int main(void) {
    int total_registros, num_nodos;
    int registros_por_nodo, registros_sobrantes;

    printf("Numero total de registros: ");
    scanf("%d", &total_registros);

    printf("Numero de nodos de procesamiento: ");
    scanf("%d", &num_nodos);

    if (num_nodos <= 0) {
        printf("El numero de nodos debe ser mayor que 0.\n");
        return 1;
    }

    registros_por_nodo = total_registros / num_nodos;
    registros_sobrantes = total_registros % num_nodos;

    printf("\n--- Distribucion ---\n");
    printf("Registros por nodo   : %d\n", registros_por_nodo);
    printf("Registros sobrantes  : %d\n", registros_sobrantes);

    return 0;
}

