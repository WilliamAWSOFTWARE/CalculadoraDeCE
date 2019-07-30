#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "LibreriaCalculadora.h"
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
void calcular_resistencia(char opcion){
    float inte, vol, pot, r1, r2;

    if(opcion=='a' || opcion=='A')
    {
        system("CLS");
        printf("1)Valor del Voltaje: ");
        scanf("%f", &vol);
        printf("\n2)Valor de la Corriente: ");
        scanf("%f", &inte);
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
                printf("%.f", inte);
            else
                printf("%c",M[i][j]);}

        printf("\n");
    }

        printf("\n\nRespuesta: %.1f ohmio", resistencia_vol_corriente(vol,inte));
    }

    if(opcion=='b' || opcion=='B')
    {
        system("CLS");
        printf("1)Valor de Potencia: ");
        scanf("%f", &pot);
        printf("3)Valor de la Corriente: ");
        scanf("%f", &inte);

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
                printf("%.f%c2", inte, 94);
            else
                printf("%c",M[i][j]);
    }
        printf("\n");

    }

    printf("\nRespuesta: %.1f ohmio", resistencia_pot_corriente(pot,inte));
    }

    if(opcion=='c' || opcion=='C')
    {
        system("CLS");
        printf("1)Valor de R1: ");
        scanf("%f", &r1);
        printf("2)Valor de R2: ");
        scanf("%f", &r2);
        printf("\nR = %.1f + %.1f", r1, r2);
        printf("\n\nRespuesta: %.1f ohmio", resistencia_equivalente_serie(r1,r2));
    }

    if(opcion=='d' || opcion=='D')
    {
        system("CLS");
        printf("1)Valor de R1: ");
        scanf("%f", &r1);
        printf("2)Valor de R2: ");
        scanf("%f", &r2);
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
            if(i==0 && j==4)
                printf("(%.fx%.f)", r1, r2);
            if(i==2 && j==4)
                printf("(%.f+%.f)", r1, r2);
            else
                printf("%c",M[i][j]);}
        printf("\n");
    }

        printf("\nRespuesta: %.1f ohmio", resistencia_equivalente_paralelo(r1,r2));
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
return (r1/(r1+r2))*is;
}
void calcular_corriente(char opcion){
    float res, vol, pot, r1, r2, is;

    if(opcion=='a' || opcion=='A')
    {
        system("CLS");
        printf("1)Valor del Voltaje: ");
        scanf("%f", &vol);
        printf("\n2)Valor de la Resistencia: ");
        scanf("%f", &res);

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
    }

    if(opcion=='b' || opcion=='B')
    {
        system("CLS");
        printf("1)Valor de Potencia: ");
        scanf("%f", &pot);
        printf("3)Valor del Voltaje: ");
        scanf("%f", &vol);

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
    }

    if(opcion=='c' || opcion=='C')
    {
        system("CLS");
        printf("1)Valor de Potencia: ");
        scanf("%f", &pot);
        printf("2)Valor de la Resistencia: ");
        scanf("%f", &res);
        printf("\nV%c2 = %.1f / %.1f", 94, pot, res);
        printf("\n\nRespuesta: %.1f ampere", intensidad_pot_res(pot,res));
    }

    if(opcion=='d' || opcion=='D')
    {
        system("CLS");
        printf("1)Valor de Ra: ");
        scanf("%f", &r1);
        printf("2)Valor de Rb: ");
        scanf("%f", &r2);
        printf("3)Valor de Is: ");
        scanf("%f", &is);

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
void calcular_voltaje(char opcion){
    float res, corr, pot, r1, r2, vs;
    if(opcion=='a' || opcion=='A')
    {
        system("CLS");
        printf("1)Valor de Resistencia: ");
        scanf("%f", &res);
        printf("\n2)Valor de la Corriente: ");
        scanf("%f", &corr);
        printf("\nV = %.1f x %.1f", res, corr);
        printf("\n\nRespuesta: %.1f voltios", voltaje_corriente_res(res,corr));
    }

    if(opcion=='b' || opcion=='B')
    {
        system("CLS");
        printf("1)Valor de Potencia: ");
        scanf("%f", &pot);
        printf("2)Valor de la Corriente: ");
        scanf("%f", &corr);
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
    }

    if(opcion=='c' || opcion=='C')
    {
        system("CLS");
        printf("1)Valor de Potencia: ");
        scanf("%f", &pot);
        printf("2)Valor de la Resistencia: ");
        scanf("%f", &res);
        printf("\nV%c2 = %.1f / %.1f", 94, pot, res);
        printf("\n\nRespuesta: %.1f voltios", voltaje_pot_res(pot,res));
    }

    if(opcion=='d' || opcion=='D')
    {
        system("CLS");
        printf("1)Valor de Ra: ");
        scanf("%f", &r1);
        printf("2)Valor de Rb: ");
        scanf("%f", &r2);
        printf("3)Valor de Vs: ");
        scanf("%f", &vs);

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
    }
}

//Impresion de las formulas de Voltaje
void voltaje()
{
    volt_corr_res();
    printf("\n\n");

    volt_corr_pos();
    printf("\n");

    volt_pot_res();
    printf("\n\n");

    div_volt();
    printf("\n\n");

}
void volt_corr_res()
{
    printf("a)V = RxI");
}
void volt_pot_res()
{
    printf("c)V%c2 = (PxR)", 94);
}
void volt_corr_pos()
{

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
void div_volt()
{
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


//Impresion de las formulas de Corriente
void corriente()
{
    inte_vol_res();
    printf("\n\n");

    inte_pot_vol();
    printf("\n");

    inte_pos_res();
    printf("\n\n");

    div_inte();
    printf("\n\n");

}
void inte_vol_res()
{

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
void inte_pot_vol()
{

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
void inte_pos_res()
{
    printf("c)I%c2 = (P/R)", 94);
}
void div_inte()
{
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


//Impresion de las formulas de Resistencia
void resistencia()
{
    res_vol_corr();
    printf("\n");

    res_pot_corr();
    printf("\n");

    res_serie();
    printf("\n\n");

    res_paralelo();
    printf("\n\n");

}
void res_vol_corr()
{

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
void res_pot_corr()
{

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
void res_serie()
{
    printf("c)Req = R1+R2");
}
void res_paralelo()
{

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
    M[1][12]=' ';
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
