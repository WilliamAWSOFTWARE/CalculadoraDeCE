#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <malloc.h>
#include "Libreria1.h"
#include "Libreria2.h"
#include <windows.h>

int main()
{
    int opc, opc1;
    do{
    do{
    system("CLS");
    printf("*************************CircuitoDeC*************************");
    printf("\nMen%c", 163);
    printf("\n1)Dibujar Circuito");
    printf("\n2)Calculadora");
    printf("\n3)Ver");
    printf("\n4)Salir");
    printf("\nOpci%cn: ", 162);
    scanf("%d", &opc);
    if(validar_respuesta_menu1(opc)==-1)
            printf("\nERROR. Favor escribir una respuesta valida");
        }while(validar_respuesta_menu1(opc)==-1);
    switch(opc)
    {
        case 1:
            system("CLS");
            dibujo();
        break;

        case 2:
            calculadora();
            break;
        case 3:
            do{
            do{
            system("CLS");
            printf("*********VER*********\n");
            printf("1)Historial de los calculos\n");
            printf("2)Limpiar Historial de los calculos\n");
            printf("3)Volver\n");
            printf("Opci%cn: ", 162);
            scanf("%d", &opc1);
            if(validar_respuesta_menu4(opc1)==-1)
                printf("\nERROR. Favor escribir una respuesta valida");
            }while(validar_respuesta_menu4(opc1)==-1);
            if(opc1==1)
                ver_historial();
            if(opc1==2)
                limpiar_historial();
            }while(opc1!=3);
	            break;
    }
    }while(opc!=4);

    return 0;
}
