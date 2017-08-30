#include <stdio.h>
#include <stdlib.h>
#include "funbib.h"

int main()
{
    int valorA,valorB,resultado;

    printf("Ingrese el valor A: ");
    scanf("%d",&valorA);

    printf("Ingrese el valor B: ");
    scanf("%d",&valorB);

    system("cls");

    resultado=suma(valorA,valorB);

    printf("Suma = %d",resultado);

    resultado=resta(valorA,valorB);

    printf(" \nResta= %d",resultado);

    return 0;
}

