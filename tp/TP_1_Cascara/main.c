#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int suma(int num1, int num2);
int resta(int num1,int num2);
float division(float num1,float num2);
int multiplicacion(int num1,int num2);

int main()
{
    char seguir='s';
    int opcion=0;

    int num1=0,num2=0,resultado;
    float resultadoDivi;



    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x%d) \n",num1);
        printf("2- Ingresar 2do operando (B=y%d) \n",num2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B) \n");
        printf("5- Calcular la division (A/B)   \n");
        printf("6- Calcular la multiplicacion (A*B)  \n");
        printf("7- Calcular el factorial (A!) %d \n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            printf("Ingrese el operando A: ");
            scanf("%d",&num1);
            continue;
        case 2:
            printf("Ingrese el operando B: ");
            scanf("%d",&num2);
            continue;
        case 3:
            resultado=suma(num1,num2);
            printf("El resultado de la suma es %d \n",resultado);
            continue;
        case 4:
            resultado=resta(num1,num2);
            printf("El resultado de la resta es %d \n",resultado);
            continue;
        case 5:
            resultadoDivi=division(num1,num2);
            printf("El resultado de la division es %.2f \n",resultadoDivi);
            continue;
        case 6:
            resultado=multiplicacion(num1,num2);
            printf("El resultado de la multiplicacion es %d \n",resultado);
            continue;
        case 7:

            continue;
        case 8:
            continue;
        case 9:
            seguir = 'n';
            break;
        }


        return 0;
    }
}
