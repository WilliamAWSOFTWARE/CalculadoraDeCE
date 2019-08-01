#include <stdio.h>
#include <stdlib.h>
#include "LibreriaCalculadora.h"

int main()
{
    VOLTAJE * volt;
    CORRIENTE * inte;
    RESISTENCIA * res;
    int cont1=0, cont2=0, cont3=0;
    int opcion, opcion2;
    char opcion1;

    do{

    do{
    system("CLS");
    printf("*********************CALCULADORA DE CIRCUITOS ELECTRICOS*********************");
    printf("\n");
    printf("1)Voltaje\n");
    printf("2)Corriente\n");
    printf("3)Resistencia\n");
    printf("Opci%cn: ", 162);
    scanf("%d", &opcion);
    if(validar_respuesta_menu1(opcion)==-1){
        printf("\nERROR. Favor escribir una respuesta valida\n\n");
        system("PAUSE");}
    }while(validar_respuesta_menu1(opcion)==-1);

    switch(opcion)
    {
    case 1:
        do{
        system("CLS");
        if(cont1==0)
            volt=(VOLTAJE*)malloc(1*sizeof(VOLTAJE));
        if(cont1>0)
            volt=(VOLTAJE*)realloc(volt,(cont1+1)*sizeof(VOLTAJE));
        printf("*********************SELECCIONE MODELO*********************\n");
        voltaje(opcion);
        printf("Opci%cn: ", 162);
        scanf("%s", &opcion1);
        if(validar_respuesta_menu2(opcion1)==-1)
        {
            printf("\nERROR. Favor escribir una respuesta valida\n\n");
            cont1=cont1;
            system("PAUSE");
        }
        }while(validar_respuesta_menu2(opcion1)==-1);
        calcular_voltaje(opcion1, volt, cont1);
        cont1++;
        break;

    case 2:
        do{
        system("CLS");
        if(cont2==0)
            inte=(CORRIENTE*)malloc(1*sizeof(CORRIENTE));
        if(cont2>0)
            inte=(CORRIENTE*)realloc(inte,(cont2+1)*sizeof(CORRIENTE));
        printf("*********************SELECCIONE MODELO*********************\n");
        corriente(opcion);
        printf("Opci%cn: ", 162);
        scanf("%s", &opcion1);
        if(validar_respuesta_menu2(opcion1)==-1)
        {
            printf("\nERROR. Favor escribir una respuesta valida\n\n");
            cont2=cont2;
            system("PAUSE");
        }
        }while(validar_respuesta_menu2(opcion1)==-1);
        calcular_corriente(opcion1, inte, cont2);
        cont2++;
        break;

    case 3:
        do{
        system("CLS");
        if(cont3==0)
            res=(RESISTENCIA*)malloc(1*sizeof(RESISTENCIA));
        if(cont3>0)
            res=(RESISTENCIA*)realloc(res,(cont3+1)*sizeof(RESISTENCIA));
        printf("*********************SELECCIONE MODELO*********************\n");
        resistencia(opcion);
        printf("Opci%cn: ", 162);
        scanf("%s", &opcion1);
        if(validar_respuesta_menu2(opcion1)==-1)
        {
            printf("\nERROR. Favor escribir una respuesta valida\n\n");
            cont3=cont3;
            system("PAUSE");
        }
        }while(validar_respuesta_menu2(opcion1)==-1);
        calcular_resistencia(opcion1, res, cont3);
        cont3++;
        break;

    }

    do{
    printf("\n\nVolver al Men%c\n", 163);
    printf("1)Si\n");
    printf("2)No\n");
    printf("Opci%cn: ", 162);
    scanf("%d", &opcion2);
    if(validar_respuesta_menu3(opcion2))
        printf("\n\nERROR. Favor escribir una respuesta valida");
    }while(validar_respuesta_menu3(opcion2)==-1);
}while(opcion2==1);

return 0;
}
