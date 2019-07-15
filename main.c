#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <malloc.h>
#include "LibreriaCalculadora.h"
#include "functions.h"


int fil,col,i,tm, cx,cy;
char grafica[0][0];
int main()
{

//EL USUARIO DEFINE EL TAMAÑO DE LA MATRIZ
do{

    printf("Actualmente no se soporta un tama%co mayor a 50!\n",164);
    printf("Actualmente no se soporta un tama%co menor a 10!",164);
    printf("\nDefina el tama%co de la matriz(No mayor a 50):\n",164);
    scanf("%d",&tm);
}while(tm>50 && tm<10);
//Si EL RESULTADO QUE SALE NO ES CORRECTO, SE VALIDA AHI ARRIBA ^^^^^^^

char grafica[tm][tm];

//AQUI SE LE ASIGNAN VALORES POR DEFAULT LA MATRIZ
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
//LIMPIEZA PARA QUE SOLO SE VEA El CIRCUITO DIBUJADO
system("CLS");
printf("\nDonde empezara a dibujar?(Tome en cuenta que no podra cambiar la posicion en donde se encuentra el elemento de circuito)\n");
printf("Es obligatorio dibujar primero la/s fuente!!!");
printf("Coordenadas en X:");
scanf("%d",&cx);
printf("Coordenadas en Y:");
scanf("%d",&cy);


//SE VALIDA QUE EL RESULTADO DE DIBUJAR NO SEA INCORRECTO
/*do{
    printf("Coordenadas en X:");
    scanf("%d",&cx);
    printf("Coordenadas en Y:");
    scanf("%d",&cy);
    if(dibujar_fuente_voltaje(grafica,cx,cy)!='0'){
        grafica[cx][cy]=dibujar_fuente_voltaje(grafica,cx,cy);
    }else{
        printf("\nLas coordenadas ingresadas no son validas!!!\n");
    }
}while(dibujar_fuente_voltaje(grafica,cx,cy)=='0');*/



//SE IMPRIME EL CIRCUITO
do{
    printf("CIRCUITO DEFAULT\n");
    for(fil=0;fil<tm;fil++){
    for(col=0;col<tm;col++){
        printf("%c ",grafica[fil][col]);
    }
    printf("\n");
}
printf("\nDonde empezara a dibujar?(Tome en cuenta que no podra cambiar la posicion en donde se encuentra el elemento de circuito)\n");

printf("Coordenadas en X:");
scanf("%d",&cx);
printf("Coordenadas en Y:");
scanf("%d",&cy);

//Metodo temporal
printf("\n1.Resistencia n2.Fuente de voltaje [+-]");
int resp;
printf("\n\nRespuesta:");
scanf("%d",&resp);
if (resp==1){
    grafica[cx][cy]='R';
}else{
    grafica[cx][cy]='F';
}
system("CLS");

}while(1);

}
