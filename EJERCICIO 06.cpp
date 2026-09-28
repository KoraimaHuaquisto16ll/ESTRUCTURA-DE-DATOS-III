/* Ejercicio 6
   Variable acumulada de registros validos: se inicializa en 4,
   se incrementa en 3 y luego se duplica. Se muestra cada estado. */
#include <stdio.h>

int main(void) {
    int registros_validos = 4;
    printf("Estado inicial            : %d\n", registros_validos);

    registros_validos = registros_validos + 3;
    printf("Despues de incrementar +3 : %d\n", registros_validos);

    registros_validos = registros_validos * 2;
    printf("Despues de duplicar       : %d\n", registros_validos);

    return 0;
}

