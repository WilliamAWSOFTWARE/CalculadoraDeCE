#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <malloc.h>
#include "functions.h"
#include <windows.h>



int fil,col,i,tm=20, cx,cy,pos,resp;
char grafica[0][0],temp, * nombre, character[21];
int main()

{
FILE * circuito;
//EL USUARIO DEFINE EL TAMAÑO DE LA MATRIZ
/*do{
    printf("Actualmente no se soporta un tama%co mayor a 20! ni menor a 10!",164);
    printf("\nDefina el tama%co de la matriz(No mayor a 20, no menor a 10):\n",164);
    scanf("%d",&tm);
}while(tm<10 || tm>20);*/
//Si EL RESULTADO QUE SALE NO ES CORRECTO, SE VALIDA AHI ARRIBA ^^^^^^^
char grafica[tm][tm];
//AQUI SE LE ASIGNAN VALORES POR DEFAULT LA MATRIZ
circuito=fopen("circuito.txt","r");
if(circuito==NULL){
    MessageBox(NULL,"Aviso","No existe un archivo de circuito!!!\nSe va a proceder a crearlo!",MB_OK | MB_ICONSTOP);
    //printf("No existe un archivo de circuito!!!\nSe va a proceder a crearlo\n");
    system("PAUSE");
    //SE CREARA EL ARCHIVO DONDE SE VA A INGRESAR EL CIRCUITO
    circuito=fopen("circuito.txt","w");
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
        circuito=fopen("circuito.txt","a+t");
        fputs(grafica,circuito);
        fclose(circuito);
    }
}
fclose(circuito);






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
    printf("Precione CTRL+C para terminar la ejecucion del programa y guardar los archivos");

}while(resp!=0);

}
