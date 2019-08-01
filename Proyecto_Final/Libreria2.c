#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "Libreria2.h"
//Calculo de la resistencia
float resistencia_vol_corriente(float v, float i){
return v/i;
}
float resistencia_pot_corriente(float p, float i){
return p/(i*i);
}
float resistencia_equivalente_serie(float r1, float r2){
return r1+r2;
}
float resistencia_equivalente_paralelo(float r1, float r2){
return (r1*r2)/(r1+r2);
}
void calcular_resistencia(char opcion, RESISTENCIA *res, int cont){
    float inte, vol, pot, r1, r2;

    if(opcion=='a' || opcion=='A')
    {
        system("CLS");
        printf("1)Valor del Voltaje: ");
        scanf("%f", &vol);
        (res+cont)->V=vol;
        printf("\n2)Valor de la Corriente: ");
        scanf("%f", &inte);
        (res+cont)->I=inte;
        printf("\n");
        char M[3][9];

    M[0][0]=' ';
    M[0][1]=' ';
    M[0][2]=' ';
    M[0][3]=' ';
    M[0][4]=' ';
    M[0][5]=' ';
    M[0][6]=' ';
    M[0][7]=' ';
    M[0][8]=' ';
    M[1][0]='R';
    M[1][1]=' ';
    M[1][2]=61;
    M[1][3]=' ';
    M[1][4]=196;
    M[1][5]=196;
    M[1][6]=196;
    M[1][7]=196;
    M[1][8]=196;
    M[2][0]=' ';
    M[2][1]=' ';
    M[2][2]=' ';
    M[2][3]=' ';
    M[2][4]=' ';
    M[2][5]=' ';
    M[2][6]=' ';
    M[2][7]=' ';
    M[2][8]=' ';


        for(int i=0;i<3;i++)
    {
        for(int j=0;j<9;j++){
            if(i==0 && j==5)
                printf("%.f", vol);
            if(i==2 && j==5)
                printf("%.f", inte);
            else
                printf("%c",M[i][j]);}

        printf("\n");
    }

        printf("\n\nRespuesta: %.1f ohmio", resistencia_vol_corriente(vol,inte));
        (res+cont)->R=resistencia_vol_corriente(vol,inte);
        histoialresistencia_vol_inte(res, cont);
    }

    if(opcion=='b' || opcion=='B')
    {
        system("CLS");
        printf("1)Valor de Potencia: ");
        scanf("%f", &pot);
        (res+cont)->P=pot;
        printf("3)Valor de la Corriente: ");
        scanf("%f", &inte);
        (res+cont)->I=vol;
        printf("\n");

        char M[3][9];

    M[0][0]=' ';
    M[0][1]=' ';
    M[0][2]=' ';
    M[0][3]=' ';
    M[0][4]=' ';
    M[0][5]=' ';
    M[0][6]=' ';
    M[0][7]=' ';
    M[0][8]=' ';
    M[1][0]='R';
    M[1][1]=' ';
    M[1][2]=61;
    M[1][3]=' ';
    M[1][4]=196;
    M[1][5]=196;
    M[1][6]=196;
    M[1][7]=196;
    M[1][8]=196;
    M[2][0]=' ';
    M[2][1]=' ';
    M[2][2]=' ';
    M[2][3]=' ';
    M[2][4]=' ';
    M[2][5]=' ';
    M[2][6]=' ';
    M[2][7]=' ';
    M[2][8]=' ';


        for(int i=0;i<3;i++)
    {
        for(int j=0;j<9;j++){
            if(i==0 && j==5)
                printf("%.f", pot);
            if(i==2 && j==5)
                printf("%.f%c2", inte, 94);
            else
                printf("%c",M[i][j]);
    }
        printf("\n");

    }

    printf("\nRespuesta: %.1f ohmio", resistencia_pot_corriente(pot,inte));
    (res+cont)->R=resistencia_pot_corriente(pot,inte);
    histoialresistencia_pot_inte(res,cont);
    }

    if(opcion=='c' || opcion=='C')
    {
        system("CLS");
        printf("1)Valor de R1: ");
        scanf("%f", &r1);
        (res+cont)->R1=r1;
        printf("2)Valor de R2: ");
        scanf("%f", &r2);
        (res+cont)->R2=r2;
        printf("\nR = %.1f + %.1f", r1, r2);
        printf("\n\nRespuesta: %.1f ohmio", resistencia_equivalente_serie(r1,r2));
        (res+cont)->R=resistencia_equivalente_serie(r1,r2);
        histoialresistencia_serie(res,cont);
    }

    if(opcion=='d' || opcion=='D')
    {
        system("CLS");
        printf("1)Valor de R1: ");
        scanf("%f", &r1);
        (res+cont)->R1=r1;
        printf("2)Valor de R2: ");
        scanf("%f", &r2);
        (res+cont)->R2=r2;
        printf("\n");
        char M[3][13];

    M[0][0]=' ';
    M[0][1]=' ';
    M[0][2]=' ';
    M[0][3]=' ';
    M[0][4]=' ';
    M[0][5]=' ';
    M[0][6]=' ';
    M[0][7]=' ';
    M[0][8]=' ';
    M[0][9]=' ';
    M[0][10]=' ';
    M[0][11]=' ';
    M[0][12]=' ';
    M[1][0]='R';
    M[1][1]=' ';
    M[1][2]=61;
    M[1][3]=' ';
    M[1][4]=196;
    M[1][5]=196;
    M[1][6]=196;
    M[1][7]=196;
    M[1][8]=196;
    M[1][9]=196;
    M[1][10]=196;
    M[1][11]=196;
    M[1][12]=' ';
    M[2][0]=' ';
    M[2][1]=' ';
    M[2][2]=' ';
    M[2][3]=' ';
    M[2][4]=' ';
    M[2][5]=' ';
    M[2][6]=' ';
    M[2][7]=' ';
    M[2][8]=' ';
    M[2][9]=' ';
    M[2][10]=' ';
    M[2][11]=' ';
    M[2][12]=' ';


        for(int i=0;i<3;i++)
    {
        for(int j=0;j<13;j++){
            if(i==0 && j==4)
                printf("(%.fx%.f)", r1, r2);
            if(i==2 && j==4)
                printf("(%.f+%.f)", r1, r2);
            else
                printf("%c",M[i][j]);}
        printf("\n");
    }

        printf("\nRespuesta: %.1f ohmio", resistencia_equivalente_paralelo(r1,r2));
        (res+cont)->R=resistencia_equivalente_paralelo(r1,r2);
        histoialresistencia_paralelo(res,cont);
    }
}
//Guardar en Historial
void histoialresistencia_vol_inte(RESISTENCIA *Res, int a){

    FILE *historial;
    //Crear un archivo
    char arreglo[10];
    historial=fopen("Historial.txt","a+t");
    if(historial==NULL)
    {
        printf("\nError. No se pudo abrir el archivo");
        historial=fopen("Historial.txt","w");
    }
    else{
        fputs("*****************************\n\n", historial);
        fputs("Voltaje(V): ", historial);
        fputs(itoa((Res+a)->V, arreglo, 10),historial);
        fputs("\nCorriente(I): ", historial);
        fputs(itoa((Res+a)->I, arreglo, 10),historial);
        fputs("\nEcuacion: R = V/I", historial);
        fputs("\nResultado: ", historial);
        fputs(itoa((Res+a)->R, arreglo, 10),historial);}
    fclose(historial);
}
void histoialresistencia_pot_inte(RESISTENCIA *Res, int a){

    FILE *historial;
    //Crear un archivo
    char arreglo[10];
    historial=fopen("Historial.txt","a+t");
    if(historial==NULL)
    {
        printf("\nError. No se pudo abrir el archivo");
        historial=fopen("Historial.txt","w");
    }
    else{
        fputs("\n\n********************************\n\n", historial);
        fputs("Potencia(P): ", historial);
        fputs(itoa((Res+a)->P, arreglo, 10),historial);
        fputs("\nCorriente(I): ", historial);
        fputs(itoa((Res+a)->I, arreglo, 10),historial);
        fputs("\nEcuacion: R = P/I^2", historial);
        fputs("\nResultado: ", historial);
        fputs(itoa((Res+a)->R, arreglo, 10),historial);}
    fclose(historial);
}
void histoialresistencia_serie(RESISTENCIA *Res, int a){

    FILE *historial;
    //Crear un archivo
    char arreglo[10];
    historial=fopen("Historial.txt","a+t");
    if(historial==NULL)
    {
        printf("\nError. No se pudo abrir el archivo");
        historial=fopen("Historial.txt","w");
    }
    else{
        fputs("\n\n********************************\n\n", historial);
        fputs("Resistencia 1(R1): ", historial);
        fputs(itoa((Res+a)->R1, arreglo, 10),historial);
        fputs("\nResistencia 2(R2): ", historial);
        fputs(itoa((Res+a)->R2, arreglo, 10),historial);
        fputs("\nEcuacion: R = R1+R2", historial);
        fputs("\nResultado: ", historial);
        fputs(itoa((Res+a)->R, arreglo, 10),historial);}
    fclose(historial);
}
void histoialresistencia_paralelo(RESISTENCIA *Res, int a){

    FILE *historial;
    //Crear un archivo
    char arreglo[10];
    historial=fopen("Historial.txt","a+t");
    if(historial==NULL)
    {
        printf("\nError. No se pudo abrir el archivo");
        historial=fopen("Historial.txt","w");
    }
    else{
        fputs("\n\n********************************\n\n", historial);
        fputs("Resistencia 1(R1): ", historial);
        fputs(itoa((Res+a)->R1, arreglo, 10),historial);
        fputs("\nResistencia 2(R2): ", historial);
        fputs(itoa((Res+a)->R2, arreglo, 10),historial);
        fputs("\nEcuacion: R = (R1*R2)/R1+R2", historial);
        fputs("\nResultado: ", historial);
        fputs(itoa((Res+a)->R, arreglo, 10),historial);}
    fclose(historial);
}
//Impresion de las formulas de Resistencia
void resistencia(){
    res_vol_corr();
    printf("\n");

    res_pot_corr();
    printf("\n");

    res_serie();
    printf("\n\n");

    res_paralelo();
    printf("\n\n");

}
void res_vol_corr(){

    char M[3][9];

    M[0][0]=' ';
    M[0][1]=' ';
    M[0][2]=' ';
    M[0][3]=' ';
    M[0][4]=' ';
    M[0][5]=' ';
    M[0][6]=' ';
    M[0][7]='V';
    M[0][8]=' ';
    M[1][0]='a';
    M[1][1]=')';
    M[1][2]='R';
    M[1][3]=' ';
    M[1][4]=61;
    M[1][5]=' ';
    M[1][6]=196;
    M[1][7]=196;
    M[1][8]=196;
    M[2][0]=' ';
    M[2][1]=' ';
    M[2][2]=' ';
    M[2][3]=' ';
    M[2][4]=' ';
    M[2][5]=' ';
    M[2][6]=' ';
    M[2][7]='I';
    M[2][8]=' ';


        for(int i=0;i<3;i++)
    {
        for(int j=0;j<9;j++)
                printf("%c",M[i][j]);

        printf("\n");
    }
}
void res_pot_corr(){

    char M[3][9];

    M[0][0]=' ';
    M[0][1]=' ';
    M[0][2]=' ';
    M[0][3]=' ';
    M[0][4]=' ';
    M[0][5]=' ';
    M[0][6]=' ';
    M[0][7]='P';
    M[0][8]=' ';
    M[1][0]='b';
    M[1][1]=')';
    M[1][2]='R';
    M[1][3]=' ';
    M[1][4]=61;
    M[1][5]=' ';
    M[1][6]=196;
    M[1][7]=196;
    M[1][8]=196;
    M[2][0]=' ';
    M[2][1]=' ';
    M[2][2]=' ';
    M[2][3]=' ';
    M[2][4]=' ';
    M[2][5]=' ';
    M[2][6]='I';
    M[2][7]='^';
    M[2][8]='2';


        for(int i=0;i<3;i++)
    {
        for(int j=0;j<9;j++)
                printf("%c",M[i][j]);

        printf("\n");
    }
}
void res_serie(){
    printf("c)Req = R1+R2");
}
void res_paralelo(){

    char M[3][13];

    M[0][0]=' ';
    M[0][1]=' ';
    M[0][2]=' ';
    M[0][3]=' ';
    M[0][4]=' ';
    M[0][5]='(';
    M[0][6]='R';
    M[0][7]='1';
    M[0][8]='*';
    M[0][9]='R';
    M[0][10]='2';
    M[0][11]=')';
    M[0][12]=' ';
    M[1][0]='d';
    M[1][1]=')';
    M[1][2]='R';
    M[1][3]=' ';
    M[1][4]=61;
    M[1][5]=' ';
    M[1][6]=196;
    M[1][7]=196;
    M[1][8]=196;
    M[1][9]=196;
    M[1][10]=196;
    M[1][11]=196;
    M[1][12]=196;
    M[2][0]=' ';
    M[2][1]=' ';
    M[2][2]=' ';
    M[2][3]=' ';
    M[2][4]=' ';
    M[2][5]='(';
    M[2][6]='R';
    M[2][7]='1';
    M[2][8]='+';
    M[2][9]='R';
    M[2][10]='2';
    M[2][11]=')';
    M[2][12]=' ';


        for(int i=0;i<3;i++)
    {
        for(int j=0;j<13;j++)
                printf("%c",M[i][j]);

        printf("\n");
    }
}


//Calculo Intensidad de Corriente
float intensidad_vol_res(float v, float r){
return v/r;
}
float intensidad_pot_vol(float p, float v){
return p/v;
}
float intensidad_pot_res(float p, float r){
return sqrt(p/r);
}
float divisor_corriente(float is, float r1, float r2){
return (r2/(r1+r2))*is;
}
void calcular_corriente(char opcion, CORRIENTE *corriente, int cont){
    float res, vol, pot, r1, r2, is;

    if(opcion=='a' || opcion=='A')
    {
        system("CLS");
        printf("1)Valor del Voltaje: ");
        scanf("%f", &vol);
        (corriente+cont)->V=vol;
        printf("\n2)Valor de la Resistencia: ");
        scanf("%f", &res);
        (corriente+cont)->R=res;

        char M[3][9];

    M[0][0]=' ';
    M[0][1]=' ';
    M[0][2]=' ';
    M[0][3]=' ';
    M[0][4]=' ';
    M[0][5]=' ';
    M[0][6]=' ';
    M[0][7]=' ';
    M[0][8]=' ';
    M[1][0]='I';
    M[1][1]=' ';
    M[1][2]=61;
    M[1][3]=' ';
    M[1][4]=196;
    M[1][5]=196;
    M[1][6]=196;
    M[1][7]=196;
    M[1][8]=' ';
    M[2][0]=' ';
    M[2][1]=' ';
    M[2][2]=' ';
    M[2][3]=' ';
    M[2][4]=' ';
    M[2][5]=' ';
    M[2][6]=' ';
    M[2][7]=' ';
    M[2][8]=' ';


        for(int i=0;i<3;i++)
    {
        for(int j=0;j<9;j++){
            if(i==0 && j==5)
                printf("%.f", vol);
            if(i==2 && j==5)
                printf("%.f", res);
            else
                printf("%c",M[i][j]);}

        printf("\n");
    }

        printf("\n\nRespuesta: %.1f ampere", intensidad_vol_res(vol,res));
        (corriente+cont)->I=intensidad_vol_res(vol,res);
        histoialcorriente_vol_res(corriente, cont);
    }

    if(opcion=='b' || opcion=='B')
    {
        system("CLS");
        printf("1)Valor de Potencia: ");
        scanf("%f", &pot);
        (corriente+cont)->P=pot;
        printf("3)Valor del Voltaje: ");
        scanf("%f", &vol);
        (corriente+cont)->V=vol;

        char M[3][9];

    M[0][0]=' ';
    M[0][1]=' ';
    M[0][2]=' ';
    M[0][3]=' ';
    M[0][4]=' ';
    M[0][5]=' ';
    M[0][6]=' ';
    M[0][7]=' ';
    M[0][8]=' ';
    M[1][0]='I';
    M[1][1]=' ';
    M[1][2]=61;
    M[1][3]=' ';
    M[1][4]=196;
    M[1][5]=196;
    M[1][6]=196;
    M[1][7]=196;
    M[1][8]=' ';
    M[2][0]=' ';
    M[2][1]=' ';
    M[2][2]=' ';
    M[2][3]=' ';
    M[2][4]=' ';
    M[2][5]=' ';
    M[2][6]=' ';
    M[2][7]=' ';
    M[2][8]=' ';


        for(int i=0;i<3;i++)
    {
        for(int j=0;j<9;j++){
            if(i==0 && j==5)
                printf("%.f", pot);
            if(i==2 && j==5)
                printf("%.f", vol);
            else
                printf("%c",M[i][j]);}

        printf("\n");
    }

    printf("\nRespuesta: %.1f ampere", intensidad_pot_vol(pot,vol));
    (corriente+cont)->I=intensidad_pot_vol(pot,vol);
    histoialcorriente_pot_vol(corriente, cont);
    }

    if(opcion=='c' || opcion=='C')
    {
        system("CLS");
        printf("1)Valor de Potencia: ");
        scanf("%f", &pot);
        (corriente+cont)->P=pot;
        printf("2)Valor de la Resistencia: ");
        scanf("%f", &res);
        (corriente+cont)->R=res;
        printf("\nV%c2 = %.1f / %.1f", 94, pot, res);
        printf("\n\nRespuesta: %.1f ampere", intensidad_pot_res(pot,res));
        (corriente+cont)->I=intensidad_pot_res(pot,res);
        histoialcorriente_pot_res(corriente, cont);
    }

    if(opcion=='d' || opcion=='D')
    {
        system("CLS");
        printf("1)Valor de Ra: ");
        scanf("%f", &r1);
        (corriente+cont)->R1=r1;
        printf("2)Valor de Rb: ");
        scanf("%f", &r2);
        (corriente+cont)->R2=r2;
        printf("3)Valor de Is: ");
        scanf("%f", &is);
        (corriente+cont)->Is=is;

        char M[3][13];

        M[0][0]=' ';
        M[0][1]=' ';
        M[0][2]=' ';
        M[0][3]=' ';
        M[0][4]=' ';
        M[0][5]=' ';
        M[0][6]=' ';
        M[0][7]=' ';
        M[0][8]=' ';
        M[0][9]=' ';
        M[0][10]=' ';
        M[0][11]=' ';
        M[0][12]=' ';
        M[1][0]='V';
        M[1][1]=' ';
        M[1][2]=61;
        M[1][3]=' ';
        M[1][4]=196;
        M[1][5]=196;
        M[1][6]=196;
        M[1][7]=196;
        M[1][8]=196;
        M[1][9]=196;
        M[1][10]=' ';
        M[1][11]=' ';
        M[1][12]=' ';
        M[2][0]=' ';
        M[2][1]=' ';
        M[2][2]=' ';
        M[2][3]=' ';
        M[2][4]=' ';
        M[2][5]=' ';
        M[2][6]=' ';
        M[2][7]=' ';
        M[2][8]=' ';
        M[2][9]=' ';
        M[2][10]=' ';
        M[2][11]=' ';
        M[2][12]=' ';


        for(int i=0;i<3;i++)
    {
        for(int j=0;j<13;j++){
            if(i==0 && j==6)
                printf("%.f", r2);
            if(i==2 && j==4)
                printf("(%.f+%.f)", r1, r2);
            if(i==1 && j==11)
                printf("%.f", is);
            else
                printf("%c",M[i][j]);}
        printf("\n");
    }

        printf("\nRespuesta: %.1f ampere", divisor_corriente(is,r1,r2));
        (corriente+cont)->I=divisor_corriente(is,r1,r2);
        histoialcorriente_div_inte(corriente, cont);
    }
}
//Guardar en Historial
void histoialcorriente_vol_res(CORRIENTE *corriente, int a){

    FILE *historial;
    //Crear un archivo
    char arreglo[10];
    historial=fopen("Historial.txt","a+t");
    if(historial==NULL)
    {
        printf("\nError. No se pudo abrir el archivo");
        historial=fopen("Historial.txt","w");
    }
    else{
        fputs("\n*****************************\n\n", historial);
        fputs("Voltaje(V): ", historial);
        fputs(itoa((corriente+a)->V, arreglo, 10),historial);
        fputs("\nResistencia(R): ", historial);
        fputs(itoa((corriente+a)->R, arreglo, 10),historial);
        fputs("\nEcuacion: I = V/R", historial);
        fputs("\nResultado: ", historial);
        fputs(itoa((corriente+a)->I, arreglo, 10),historial);}
    fclose(historial);
}
void histoialcorriente_pot_vol(CORRIENTE *corriente, int a){

    FILE *historial;
    //Crear un archivo
    char arreglo[10];
    historial=fopen("Historial.txt","a+t");
    if(historial==NULL)
    {
        printf("\nError. No se pudo abrir el archivo");
        historial=fopen("Historial.txt","w");
    }
    else{
        fputs("\n\n********************************\n\n", historial);
        fputs("Potencia(P): ", historial);
        fputs(itoa((corriente+a)->P, arreglo, 10),historial);
        fputs("\nVoltaje(V): ", historial);
        fputs(itoa((corriente+a)->V, arreglo, 10),historial);
        fputs("\nEcuacion: I = P/V", historial);
        fputs("\nResultado: ", historial);
        fputs(itoa((corriente+a)->I, arreglo, 10),historial);}
    fclose(historial);
}
void histoialcorriente_pot_res(CORRIENTE *corriente, int a){

    FILE *historial;
    //Crear un archivo
    char arreglo[10];
    historial=fopen("Historial.txt","a+t");
    if(historial==NULL)
    {
        printf("\nError. No se pudo abrir el archivo");
        historial=fopen("Historial.txt","w");
    }
    else{
        fputs("\n\n********************************\n\n", historial);
        fputs("Potencia(P): ", historial);
        fputs(itoa((corriente+a)->P, arreglo, 10),historial);
        fputs("\nResistencia (R): ", historial);
        fputs(itoa((corriente+a)->R, arreglo, 10),historial);
        fputs("\nEcuacion: I^2 = P/R", historial);
        fputs("\nResultado: ", historial);
        fputs(itoa((corriente+a)->I, arreglo, 10),historial);}
    fclose(historial);
}
void histoialcorriente_div_inte(CORRIENTE *corriente, int a){

    FILE *historial;
    //Crear un archivo
    char arreglo[10];
    historial=fopen("Historial.txt","a+t");
    if(historial==NULL)
    {
        printf("\nError. No se pudo abrir el archivo");
        historial=fopen("Historial.txt","w");
    }
    else{
        fputs("\n\n********************************\n\n", historial);
        fputs("Resistencia 1(R1): ", historial);
        fputs(itoa((corriente+a)->R1, arreglo, 10),historial);
        fputs("\nResistencia 2(R2): ", historial);
        fputs(itoa((corriente+a)->R2, arreglo, 10),historial);
        fputs("\nCorriente de fuente (Is): ", historial);
        fputs(itoa((corriente+a)->Is, arreglo, 10),historial);
        fputs("\nEcuacion: I = (R2/R1+R2)*Is", historial);
        fputs("\nResultado: ", historial);
        fputs(itoa((corriente+a)->I, arreglo, 10),historial);}
    fclose(historial);
}
//Impresion de las formulas de Corriente
void corriente(){
    inte_vol_res();
    printf("\n\n");

    inte_pot_vol();
    printf("\n");

    inte_pos_res();
    printf("\n\n");

    div_inte();
    printf("\n\n");

}
void inte_vol_res(){

    char M[3][9];

    M[0][0]=' ';
    M[0][1]=' ';
    M[0][2]=' ';
    M[0][3]=' ';
    M[0][4]=' ';
    M[0][5]=' ';
    M[0][6]=' ';
    M[0][7]='V';
    M[0][8]=' ';
    M[1][0]='a';
    M[1][1]=')';
    M[1][2]='I';
    M[1][3]=' ';
    M[1][4]=61;
    M[1][5]=' ';
    M[1][6]=196;
    M[1][7]=196;
    M[1][8]=196;
    M[2][0]=' ';
    M[2][1]=' ';
    M[2][2]=' ';
    M[2][3]=' ';
    M[2][4]=' ';
    M[2][5]=' ';
    M[2][6]=' ';
    M[2][7]='R';
    M[2][8]=' ';


        for(int i=0;i<3;i++)
    {
        for(int j=0;j<9;j++)
                printf("%c",M[i][j]);

        printf("\n");
    }
}
void inte_pot_vol(){

    char M[3][9];

    M[0][0]=' ';
    M[0][1]=' ';
    M[0][2]=' ';
    M[0][3]=' ';
    M[0][4]=' ';
    M[0][5]=' ';
    M[0][6]=' ';
    M[0][7]='P';
    M[0][8]=' ';
    M[1][0]='b';
    M[1][1]=')';
    M[1][2]='I';
    M[1][3]=' ';
    M[1][4]=61;
    M[1][5]=' ';
    M[1][6]=196;
    M[1][7]=196;
    M[1][8]=196;
    M[2][0]=' ';
    M[2][1]=' ';
    M[2][2]=' ';
    M[2][3]=' ';
    M[2][4]=' ';
    M[2][5]=' ';
    M[2][6]=' ';
    M[2][7]='V';
    M[2][8]=' ';


        for(int i=0;i<3;i++)
    {
        for(int j=0;j<9;j++)
                printf("%c",M[i][j]);

        printf("\n");
    }
}
void inte_pos_res(){
    printf("c)I%c2 = (P/R)", 94);
}
void div_inte(){
    char M[3][14];

    M[0][0]=' ';
    M[0][1]=' ';
    M[0][2]=' ';
    M[0][3]=' ';
    M[0][4]=' ';
    M[0][5]=' ';
    M[0][6]=' ';
    M[0][7]=' ';
    M[0][8]='R';
    M[0][9]='b';
    M[0][10]=' ';
    M[0][11]=' ';
    M[0][12]=' ';
    M[0][13]=' ';
    M[1][0]='d';
    M[1][1]=')';
    M[1][2]='I';
    M[1][3]=' ';
    M[1][4]=61;
    M[1][5]=' ';
    M[1][6]=196;
    M[1][7]=196;
    M[1][8]=196;
    M[1][9]=196;
    M[1][10]=196;
    M[1][11]=' ';
    M[1][12]='I';
    M[1][13]='s';
    M[2][0]=' ';
    M[2][1]=' ';
    M[2][2]=' ';
    M[2][3]=' ';
    M[2][4]=' ';
    M[2][5]='(';
    M[2][6]='R';
    M[2][7]='a';
    M[2][8]='+';
    M[2][9]='R';
    M[2][10]='b';
    M[2][11]=')';
    M[2][12]=' ';
    M[2][13]=' ';


        for(int i=0;i<3;i++)
    {
        for(int j=0;j<14;j++)
            printf("%c",M[i][j]);

        printf("\n");
    }
}


//Calculo del Voltaje
float voltaje_corriente_res(float r, float i){
return r*i;
}
float voltaje_corriente_pot(float p, float i){
return p/i;
}
float voltaje_pot_res(float p, float r){
return sqrt(p*r);
}
float divisor_voltaje(float r1, float r2, float vs){
return (r1/(r1+r2))*vs;
}
void calcular_voltaje(char opcion, VOLTAJE *voltaje, int cont){
    float res, corr, pot, r1, r2, vs;
    if(opcion=='a' || opcion=='A')
    {
        system("CLS");
        printf("1)Valor de Resistencia: ");
        scanf("%f", &res);
        (voltaje+cont)->R=res;
        printf("\n2)Valor de la Corriente: ");
        scanf("%f", &corr);
        (voltaje+cont)->I=corr;
        printf("\nV = %.1f x %.1f", res, corr);
        printf("\n\nRespuesta: %.1f voltios", voltaje_corriente_res(res,corr));
        (voltaje+cont)->V=voltaje_corriente_res(res,corr);
        histoialvoltaje_corr_res(voltaje, cont);
    }

    if(opcion=='b' || opcion=='B')
    {
        system("CLS");
        printf("1)Valor de Potencia: ");
        scanf("%f", &pot);
        (voltaje+cont)->P=pot;
        printf("2)Valor de la Corriente: ");
        scanf("%f", &corr);
        (voltaje+cont)->I=corr;
        char M[3][7];

    M[0][0]=' ';
    M[0][1]=' ';
    M[0][2]=' ';
    M[0][3]=' ';
    M[0][4]=' ';
    M[0][5]=' ';
    M[0][6]=' ';
    M[1][0]='V';
    M[1][1]=' ';
    M[1][2]=61;
    M[1][3]=' ';
    M[1][4]=196;
    M[1][5]=196;
    M[1][6]=196;
    M[2][0]=' ';
    M[2][1]=' ';
    M[2][2]=' ';
    M[2][3]=' ';
    M[2][4]=' ';
    M[2][5]=' ';
    M[2][6]=' ';


        for(int i=0;i<3;i++)
    {
        for(int j=0;j<7;j++){
            if (i==0 && j==4)
            printf("%.1f", pot);
            if (i==2 && j==4)
            printf("%.1f", corr);
            else
            printf("%c",M[i][j]);
        }

        printf("\n");
    }

        printf("\nRespuesta: %.1f voltios", voltaje_corriente_pot(pot,corr));
        (voltaje+cont)->V=voltaje_corriente_pot(pot,corr);
        histoialvoltaje_corr_pot(voltaje, cont);
    }

    if(opcion=='c' || opcion=='C')
    {
        system("CLS");
        printf("1)Valor de Potencia: ");
        scanf("%f", &pot);
        (voltaje+cont)->P=pot;
        printf("2)Valor de la Resistencia: ");
        scanf("%f", &res);
        (voltaje+cont)->R=res;
        printf("\nV%c2 = %.1f / %.1f", 94, pot, res);
        printf("\n\nRespuesta: %.1f voltios", voltaje_pot_res(pot,res));
        (voltaje+cont)->V=voltaje_pot_res(pot,res);
        histoialvoltaje_pot_res(voltaje, cont);
    }

    if(opcion=='d' || opcion=='D')
    {
        system("CLS");
        printf("1)Valor de Ra: ");
        scanf("%f", &r1);
        (voltaje+cont)->R1=r1;
        printf("2)Valor de Rb: ");
        scanf("%f", &r2);
        (voltaje+cont)->R2=r2;
        printf("3)Valor de Vs: ");
        scanf("%f", &vs);
        (voltaje+cont)->Vs=vs;

        char M[3][13];

        M[0][0]=' ';
        M[0][1]=' ';
        M[0][2]=' ';
        M[0][3]=' ';
        M[0][4]=' ';
        M[0][5]=' ';
        M[0][6]=' ';
        M[0][7]=' ';
        M[0][8]=' ';
        M[0][9]=' ';
        M[0][10]=' ';
        M[0][11]=' ';
        M[0][12]=' ';
        M[1][0]='V';
        M[1][1]=' ';
        M[1][2]=61;
        M[1][3]=' ';
        M[1][4]=196;
        M[1][5]=196;
        M[1][6]=196;
        M[1][7]=196;
        M[1][8]=196;
        M[1][9]=196;
        M[1][10]=' ';
        M[1][11]=' ';
        M[1][12]=' ';
        M[2][0]=' ';
        M[2][1]=' ';
        M[2][2]=' ';
        M[2][3]=' ';
        M[2][4]=' ';
        M[2][5]=' ';
        M[2][6]=' ';
        M[2][7]=' ';
        M[2][8]=' ';
        M[2][9]=' ';
        M[2][10]=' ';
        M[2][11]=' ';
        M[2][12]=' ';


        for(int i=0;i<3;i++)
    {
        for(int j=0;j<13;j++){
            if(i==0 && j==6)
                printf("%.f", r1);
            if(i==2 && j==4)
                printf("(%.f+%.f)", r1, r2);
            if(i==1 && j==11)
                printf("%.f", vs);
            else
                printf("%c",M[i][j]);}
        printf("\n");
    }
        printf("\nRespuesta: %.1f voltios", divisor_voltaje(r1,r2,vs));
        (voltaje+cont)->V=divisor_voltaje(r1,r2,vs);
        histoialvoltaje_div_volt(voltaje, cont);
    }
}
//Guardar Historial
void histoialvoltaje_corr_res(VOLTAJE *voltaje, int a){

    FILE *historial;
    //Crear un archivo
    char arreglo[10];
    historial=fopen("Historial.txt","a+t");
    if(historial==NULL)
    {
        printf("\nError. No se pudo abrir el archivo");
        historial=fopen("Historial.txt","w");
    }
    else{
        fputs("\n*****************************\n\n", historial);
        fputs("Corriente(I): ", historial);
        fputs(itoa((voltaje+a)->I, arreglo, 10),historial);
        fputs("\nResistencia(R): ", historial);
        fputs(itoa((voltaje+a)->R, arreglo, 10),historial);
        fputs("\nEcuacion: V = R*I", historial);
        fputs("\nResultado: ", historial);
        fputs(itoa((voltaje+a)->V, arreglo, 10),historial);}
    fclose(historial);
}
void histoialvoltaje_corr_pot(VOLTAJE *voltaje, int a){

    FILE *historial;
    //Crear un archivo
    char arreglo[10];
    historial=fopen("Historial.txt","a+t");
    if(historial==NULL)
    {
        printf("\nError. No se pudo abrir el archivo");
        historial=fopen("Historial.txt","w");
    }
    else{
        fputs("\n********************************\n\n", historial);
        fputs("Potencia(P): ", historial);
        fputs(itoa((voltaje+a)->P, arreglo, 10),historial);
        fputs("\nCorriente(I): ", historial);
        fputs(itoa((voltaje+a)->V, arreglo, 10),historial);
        fputs("\nEcuacion: V = P/I", historial);
        fputs("\nResultado: ", historial);
        fputs(itoa((voltaje+a)->V, arreglo, 10),historial);}
    fclose(historial);
}
void histoialvoltaje_pot_res(VOLTAJE *voltaje, int a){

    FILE *historial;
    //Crear un archivo
    char arreglo[10];
    historial=fopen("Historial.txt","a+t");
    if(historial==NULL)
    {
        printf("\nError. No se pudo abrir el archivo");
        historial=fopen("Historial.txt","w");
    }
    else{
        fputs("\n\n********************************\n\n", historial);
        fputs("Potencia(P): ", historial);
        fputs(itoa((voltaje+a)->P, arreglo, 10),historial);
        fputs("\nResistencia (R): ", historial);
        fputs(itoa((voltaje+a)->R, arreglo, 10),historial);
        fputs("\nEcuacion: V^2 = P*R", historial);
        fputs("\nResultado: ", historial);
        fputs(itoa((voltaje+a)->V, arreglo, 10),historial);}
    fclose(historial);
}
void histoialvoltaje_div_volt(VOLTAJE *voltaje, int a){

    FILE *historial;
    //Crear un archivo
    char arreglo[10];
    historial=fopen("Historial.txt","a+t");
    if(historial==NULL)
    {
        printf("\nError. No se pudo abrir el archivo");
        historial=fopen("Historial.txt","w");
    }
    else{
        fputs("\n\n********************************\n\n", historial);
        fputs("Resistencia 1(R1): ", historial);
        fputs(itoa((voltaje+a)->R1, arreglo, 10),historial);
        fputs("\nResistencia 2(R2): ", historial);
        fputs(itoa((voltaje+a)->R2, arreglo, 10),historial);
        fputs("\nVoltaje de fuente (Vs): ", historial);
        fputs(itoa((voltaje+a)->Vs, arreglo, 10),historial);
        fputs("\nEcuacion: V = (R1/R1+R2)*Vs", historial);
        fputs("\nResultado: ", historial);
        fputs(itoa((voltaje+a)->V, arreglo, 10),historial);}
    fclose(historial);
}
//Impresion de las formulas de Voltaje
void voltaje(){
    volt_corr_res();
    printf("\n\n");

    volt_corr_pos();
    printf("\n");

    volt_pot_res();
    printf("\n\n");

    div_volt();
    printf("\n\n");

}
void volt_corr_res(){
    printf("a)V = RxI");
}
void volt_pot_res(){
    printf("c)V%c2 = (PxR)", 94);
}
void volt_corr_pos(){

    char M[3][9];

    M[0][0]=' ';
    M[0][1]=' ';
    M[0][2]=' ';
    M[0][3]=' ';
    M[0][4]=' ';
    M[0][5]=' ';
    M[0][6]=' ';
    M[0][7]='P';
    M[0][8]=' ';
    M[1][0]='b';
    M[1][1]=')';
    M[1][2]='V';
    M[1][3]=' ';
    M[1][4]=61;
    M[1][5]=' ';
    M[1][6]=196;
    M[1][7]=196;
    M[1][8]=196;
    M[2][0]=' ';
    M[2][1]=' ';
    M[2][2]=' ';
    M[2][3]=' ';
    M[2][4]=' ';
    M[2][5]=' ';
    M[2][6]=' ';
    M[2][7]='I';
    M[2][8]=' ';


        for(int i=0;i<3;i++)
    {
        for(int j=0;j<9;j++)
                printf("%c",M[i][j]);

        printf("\n");
    }
}
void div_volt(){
    char M[3][14];

    M[0][0]=' ';
    M[0][1]=' ';
    M[0][2]=' ';
    M[0][3]=' ';
    M[0][4]=' ';
    M[0][5]=' ';
    M[0][6]=' ';
    M[0][7]=' ';
    M[0][8]='R';
    M[0][9]='a';
    M[0][10]=' ';
    M[0][11]=' ';
    M[0][12]=' ';
    M[0][13]=' ';
    M[1][0]='d';
    M[1][1]=')';
    M[1][2]='V';
    M[1][3]=' ';
    M[1][4]=61;
    M[1][5]=' ';
    M[1][6]=196;
    M[1][7]=196;
    M[1][8]=196;
    M[1][9]=196;
    M[1][10]=196;
    M[1][11]=' ';
    M[1][12]='V';
    M[1][13]='s';
    M[2][0]=' ';
    M[2][1]=' ';
    M[2][2]=' ';
    M[2][3]=' ';
    M[2][4]=' ';
    M[2][5]='(';
    M[2][6]='R';
    M[2][7]='a';
    M[2][8]='+';
    M[2][9]='R';
    M[2][10]='b';
    M[2][11]=')';
    M[2][12]=' ';
    M[2][13]=' ';


        for(int i=0;i<3;i++)
    {
        for(int j=0;j<14;j++)
            printf("%c",M[i][j]);

        printf("\n");
    }
}

//Funciones para validar las opciones en el menu
int validar_respuesta_menu1(int a){
    if(a>=1 && a<=4)
        return 1;
    else
        return -1;
}

int validar_respuesta_menu2(char a){
    if(a=='a' || a=='A')
        return 1;
    if(a=='b' || a=='B')
        return 1;
    if(a=='c' || a=='C')
        return 1;
    if(a=='d' || a=='D')
        return 1;
    return -1;
}

int validar_respuesta_menu3(int a){
    if(a>=1 && a<=2)
        return 1;
    else
        return -1;
}

int validar_respuesta_menu4(int a){
    if(a>=1 && a<=3)
        return 1;
    else
        return -1;
}

