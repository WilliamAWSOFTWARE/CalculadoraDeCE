#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <malloc.h>
#include "functions.h"
#include <windows.h>

int ndn=0,i=0,coordenadas[0],fil,col,totno;
char character[21];
void asignar_potenciales();
void asignar_nodos();
//LEY DE SUMATORIA DE VOLTAJE = 0 DE KIRCHHOFF
float LVK(int vi[]);
//LEY DE SUMATORIA DE CORRIENTE = 0 DE KIRCHHOFF
float LIK(int ai[]);
//LEY DE OHM R=V/I
float calc_res_ohm(int v, int i){
    return v/i;
}
//LEY DE OHM I=V/R
float calc_int_ohm(int r, int v){
    return v/r;
}
//LEY DE OHM V=R*I
float calc_vol_ohm(int r, int i){
    return r*i;
}
//TRANSFORMACION DE FUENTES
float trans_fuentes_ohm(int voi, int r, int resp);
/*DESPUES
float analisis_de_nodos(int [], int []);
float analisis_de_mallas(int [], int []);
*/
//DETERMINA EL VALOR DE LA RESISTENCIA POR SU CODIGO DE COLOR
float calcular_valores_resistencia_cod_color(int color[]);
//CALCULAR LA RESISTENCIA TOTAL DE UN CLABLE SEGUN SU MATERIAL, TEMPERATURA Y RESISTENCIA/1000FT
float calcular_res_cable(float r ,float L, float rad);
float calcular_potencia(float v, float i,float r);
float calcular_porcentaje_de_regulacion(float vt, float vr){
    return fabs((vt-vr)/vt*100);
}
float divisores_de_voltaje(float r[], float i);
float divisores_de_corriente(float r[], float v);
float resistencia_equivalente(float r[]);
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
    printf("CIRCUITO DEFAULT\n");
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
        }else if(grafica[fil][col]==124|| grafica[fil][col]==196){
            SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),9);
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
}
void guarda_circuito(char grafica[][20],FILE * circuito){
        circuito=fopen("circuito.txt","w");
        circuito=fopen("circuito.txt","a+t");
        fputs(grafica,circuito);
        fclose(circuito);
}


