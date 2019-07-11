#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <malloc.h>
#include "functions.h"

char grafica[3][3];
int fil,col;

int main()
{
    grafica[0][0]='X';
    grafica[0][1]='R';
    grafica[0][2]='X';
    grafica[1][0]='R';
    grafica[1][1]='O';
    grafica[1][2]='R';
    grafica[2][0]='X';
    grafica[2][1]='R';
    grafica[2][2]='X';

    printf("EL potencial tiene %d elementos de circuitos.", detectar_nodos(grafica,3,3));











}
