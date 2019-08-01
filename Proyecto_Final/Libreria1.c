#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <malloc.h>
#include "Libreria1.h"
#include "Libreria2.h"
#include <windows.h>

int ndn=0,i=0,coordenadas[0],fil,col,totno;
char character[21];
void asignar_potenciales();
void asignar_nodos();

int detectar_nodos(char grafica[][20], int tm){
    //Aqui se revisa la matriz completa con sus valores
    totno=0;
    for(fil=0;fil<tm;fil++){
        for(col=0;col<tm;col++){
            if(grafica[fil][col]=='O'){
                printf("HAY UN NODO\n");
                if (grafica[fil][col-1]=='R' || grafica[fil][col-1]=='F'){
                    printf("\nA LA IZQUIERDA DEL NODO\n");
                    ndn++;
                }
                //Se Compara hacia abajo a 2 espacios, del potencial
                if (grafica[fil+1][col]=='R' || grafica[fil+1][col]=='F'){
                    printf("ABAJO DEL NODO\n");
                    ndn++;
                }
                //Se Compara por la izquierda a 2 espacios, del potencial
                if (grafica[fil][col+1]=='R' || grafica[fil][col+1]=='F'){
                    printf("A LA DERECHA DEL NODO\n");
                    ndn++;
                }
                //Se Compara por arriba a 2 espacios, del potencial
                if (grafica[fil-1][col]=='R' || grafica[fil-1][col]=='F'){
                    printf("ARRIBA DEL NODO\n");
                    ndn++;
                }
                printf("\nVALOR DE NDN %d\n",ndn);
                if(ndn>2){
                    totno++;
                    ndn=0;
                }
                ndn=0;
            }

        }
    }
    return totno;
}
char dibujar_nodo(char g[][20],int cx, int cy){
    if(g[cx][cy]!='0'){
        return 'O';
    }else{
        return '0';
    }
}
char dibujar_fuente_voltaje(char g[][20],int cx, int cy){
    if(g[cx][cy]!='0'){
        return 'F';
    }else{
        return '0';
    }
}
char dibujar_resistencia(char g[][20],int cx, int cy){
    if(g[cx][cy]!='0'){
        return 'R';
    }else{
        return '0';
    }
}
void dibujar_grafica(char grafica[][20],int tm){
    system("CLS");
    printf("****************************************CIRCUITO****************************************\n");
    printf("Solo dibujar en las XXX\n\n");
    for(fil=0;fil<tm;fil++){
    for(col=0;col<tm;col++){
        if(grafica[fil][col]=='0'){
            SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),15);
        }else if(grafica[fil][col]=='X'){
            SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),8);
        }else if(grafica[fil][col]=='R' || grafica[fil][col]=='r'){
            SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),3);
        }else if(grafica[fil][col]=='F' || grafica[fil][col]=='f'){
            SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),2);
        }else if(grafica[fil][col]=='O' || grafica[fil][col]=='o'){
            SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),1);
        }else if(grafica[fil][col]=='E'){
            SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),105);
        }else if(grafica[fil][col]=='-'|| grafica[fil][col]=='|'){
            SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),4);
        }

        if(col==0){
            if(fil<=9){
                printf("0%d %c ",fil,grafica[fil][col]);
            }else{
                printf("%d %c ",fil,grafica[fil][col]);
            }
        }else{
            printf("%c ",grafica[fil][col]);
        }
    }
    printf("\n");
}
}
char dibujar_cable(char g[][20],int cx, int cy,int type){
    if(g[cx][cy]!='0'){
        if(type==1){
            return 124;
        }else if(type==2){
            return '-';
        }
    }else{
        return '0';
    }
    return -1;
}
void guarda_circuito(char grafica[][20],FILE * circuito){
        circuito=fopen("circuito.txt","w");
        circuito=fopen("circuito.txt","a+t");
        fputs(grafica,circuito);
        fclose(circuito);
}


//Funcion que realice los dibujos de los circuitos
void dibujo()
{
    int fil,col,i,tm=20, cx,cy,pos,resp;
char /*grafica[0][0],*/temp, * nombre, character[21];
FILE * circuito;
char grafica[tm][tm];
//AQUI SE LE ASIGNAN VALORES POR DEFAULT LA MATRIZ
circuito=fopen("circuito.txt","r");
if(circuito==NULL){
    MessageBox(NULL,"No existe un archivo de circuito!!!\nSe va a proceder a crearlo!","AVISO!",MB_OK | MB_ICONSTOP);
    //printf("No existe un archivo de circuito!!!\nSe va a proceder a crearlo\n");
    system("PAUSE");
    //SE CREARA EL ARCHIVO DONDE SE VA A INGRESAR EL CIRCUITO

    circuito=fopen("circuito.txt","w+t");
        for(fil=0;fil<tm;fil++){
            for(col=0;col<tm;col++){
                if(fil==0 && col>=0 && col<=tm-1){
                    grafica[fil][col]='0';
                }else if(fil!=0 && col==0){
                    grafica[fil][col]='0';
                }else if(fil==tm-1 && col==tm-1){
                    grafica[fil][col]='0';
                }else if(fil==tm-1 && col!=tm-1){
                    grafica[fil][col]='0';
                }else if(col==tm-1 && fil>=0 && fil<=tm-1){
                    grafica[fil][col]='0';
                }else{
                    grafica[fil][col]='X';
                }
            }
        }
        fputs(grafica,circuito);
        fclose(circuito);
}else{
    printf("El archivo existe!!\nDesea modificarlo o sobreescribirlo?\n\n1.Modificar\n2.Eliminar y abrir nuevo\n\nRespuesta:");
    scanf("%d",&resp);
    if(resp==1){
        circuito=fopen("circuito.txt","r");
        fgets(grafica,(tm*tm)+1,circuito);

    }else if(resp==2){
        circuito=fopen("circuito.txt","w+t");
        for(fil=0;fil<tm;fil++){
            for(col=0;col<tm;col++){
                if(fil==0 && col>=0 && col<=tm-1){
                    grafica[fil][col]='0';
                }else if(fil!=0 && col==0){
                    grafica[fil][col]='0';
                }else if(fil==tm-1 && col==tm-1){
                    grafica[fil][col]='0';
                }else if(fil==tm-1 && col!=tm-1){
                    grafica[fil][col]='0';
                }else if(col==tm-1 && fil>=0 && fil<=tm-1){
                    grafica[fil][col]='0';
                }else{
                    grafica[fil][col]='X';
                }
            }
        }
        fputs(grafica,circuito);
        fclose(circuito);
    }
}

//SE IMPRIME EL CIRCUITO
dibujar_grafica(grafica, tm);
//INICIO DEL PROGRAMA
do{
//SE LE ASIGNA COLORES
    SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);
    printf("\nDonde desea dibujar?");
    printf("\nCoordenadas en X:");
    scanf("%d",&cx);
    printf("Coordenadas en Y:");
    scanf("%d",&cy);
    //ESTA VARIABLE TEMPORAL GUARDA EL VALOR POR SI LUEGO SE CANCELA LA ACCION
    temp=grafica[cx][cy];
    grafica[cx][cy]='E';
    system("CLS");
    dibujar_grafica(grafica, tm);
    printf("En la posicion escojida, elija que poner:\n");
    printf("\n1.Resistencia (/%c/%c/) \n2.Fuente de voltaje ([+-])\n3.Potencial (o) o Nodo (o)\n4.Cable\n5.Cancelar",92,92,92);
    printf("\n\nRespuesta:");
    scanf("%d",&resp);
    if (resp==1){
        grafica[cx][cy]=dibujar_resistencia(grafica,cx,cy);
    }else if(resp==2){
        grafica[cx][cy]=dibujar_fuente_voltaje(grafica,cx,cy);
    }else if(resp==3){
        grafica[cx][cy]=dibujar_nodo(grafica,cx,cy);
    }else if(resp==4){
        printf("\n1.Cable (%c)\n2.Cable(-)",124);
        printf("\n\nRespuesta:");
        scanf("%d",&resp);
        grafica[cx][cy]=dibujar_cable(grafica,cx,cy,resp);
    }else if(resp==5){
        grafica[cx][cy]=temp;

    }
    system("CLS");
    //SE VUELVE A IMPRIMIR EL CIRCUITO
    dibujar_grafica(grafica, tm);
    guarda_circuito(grafica,circuito);
    printf("\nPrecione 0 para terminar la ejecucion del programa y guardar los archivos. De lo contrario presione cualquier tecla. ");
    scanf("%d", &resp);

}while(resp!=0);
}


//Funcion que realiza los calculos relacionado a circuitos (coltaje, corriente, resistencia)
void calculadora()
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
    printf("4)Volver\n");
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
    if(opcion!=4){
    do{
    printf("\n\nVolver al Men%c\n", 163);
    printf("1)Si\n");
    printf("2)No\n");
    printf("Opci%cn: ", 162);
    scanf("%d", &opcion2);
    if(validar_respuesta_menu3(opcion2)==-1)
        printf("\n\nERROR. Favor escribir una respuesta valida");
    }while(validar_respuesta_menu3(opcion2)==-1);
    }
}while(opcion2==1 && opcion!=4);

}

//Funcion que muestra el historial de los calculos
void ver_historial()
{
    FILE * historial;
    char hist;

    historial=fopen("Historial.txt", "r");
    if (historial == NULL)
        {
            printf("\nError de apertura del archivo. \n\n");
        }
        else
        {
            printf("****************HISTORIAL****************\n\n");
            while((hist = fgetc(historial)) != EOF)
            printf("%c",hist);

        }
        fclose(historial);

    printf("\n\n");
    system("PAUSE");
}

//Funcion que limpia el historial de los calculos
void limpiar_historial()
{
    FILE * historial;

    historial=fopen("Historial.txt", "w");
    if (historial == NULL)
        {
            printf("\nError de apertura del archivo. \n\n");
        }
        else
            printf("\nEl historial ya esta limpio");
            fclose(historial);

    printf("\n\n");
    system("PAUSE");
}

