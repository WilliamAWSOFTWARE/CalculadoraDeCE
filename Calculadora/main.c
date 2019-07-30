#include <stdio.h>
#include <stdlib.h>
#include "LibreriaCalculadora.h"

int main()
{
    int opcion, opcion2;
    char opcion1;

    do{
    printf("*********************CALCULADORA DE CIRCUITOS ELECTRICOS*********************");
    printf("\n");
    printf("1)Voltaje\n");
    printf("2)Corriente\n");
    printf("3)Resistencia\n");
    printf("Opci%cn: ", 162);
    scanf("%d", &opcion);

    switch(opcion)
    {
    case 1:
        system("CLS");
        printf("*********************SELECCIONE MODELO*********************\n");
        voltaje(opcion);
        printf("Opci%cn: ", 162);
        scanf("%s", &opcion1);
        calcular_voltaje(opcion1);
        break;

    case 2:
        system("CLS");
        printf("*********************SELECCIONE MODELO*********************\n");
        corriente(opcion);
        printf("Opci%cn: ", 162);
        scanf("%s", &opcion1);
        calcular_corriente(opcion1);
        break;

    case 3:
        system("CLS");
        printf("*********************SELECCIONE MODELO*********************\n");
        resistencia(opcion);
        printf("Opci%cn: ", 162);
        scanf("%s", &opcion1);
        calcular_resistencia(opcion1);
        break;
    }

    printf("\n\nVolver al Men%c\n", 163);
    printf("1)Si\n");
    printf("2)No\n");
    printf("Opci%cn: ", 162);
    scanf("%d", &opcion2);

}while(opcion2==1);

return 0;

}
