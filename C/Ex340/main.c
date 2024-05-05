// Esquema de la entrada: número de casos
#include <stdio.h>

void casoDePrueba() {
    int ancho, largo, total = 0;
    scanf("%d %d", &ancho, &largo);

    total += 2 * (ancho + largo) + largo * (ancho -1) + (largo - 1 ) * ancho;
    printf("%d\n", total);
} // csoDePrueba

int main() {
    unsigned int numCasos, i;
    scanf("%u\n", &numCasos);

    for (i = 0; i < numCasos; ++i)
        casoDePrueba();

    return 0;
} // main
