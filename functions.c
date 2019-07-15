#include <math.h>
int ndn=0,i=0,coordenadas[0],fil,col;
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
int detectar_nodos(char grafica[3][3], int tc, int tf){
    //Aqui se revisa la matriz completa con sus valores
     for(fil=0;fil<=2;fil++){
        for(col=0;col<=2;col++){
            if(grafica[fil][col]=='O'){
                //printf("HAY UN MALDITO NODO\n");
                if (grafica[fil][col+1]=='R' || grafica[fil][col+1]=='F'){
                    //printf("A LA DERECHA DEL NODO\n");
                    ndn++;
                }
                //Se Compara hacia abajo a 2 espacios, del potencial
                if (grafica[fil+1][col]=='R' || grafica[fil+1][col]=='F'){
                    //printf("ARRIBA DEL NODO\n");
                    ndn++;
                }
                //Se Compara por la izquierda a 2 espacios, del potencial
                if (grafica[fil][col-1]=='R' || grafica[fil][col-1]=='F'){
                    //printf("A LA IZQUIERDA DEL NODO\n");
                    ndn++;
                }
                //Se Compara por arriba a 2 espacios, del potencial
                if (grafica[fil-1][col]=='R' || grafica[fil-1][col]=='F'){
                    //printf("ABAJO DEL NODO\n");
                    ndn++;
                }
            }
        }
    }
    return ndn;
}
char dibujar_nodo(char g[0][0],int cx, int cy){

}

char dibujar_fuente_voltaje(char g[][0],int cx, int cy){
    if(g[cx][cy]=='X'){
        return 'F';
    }else{
        return '0';
    }
}

char dibujar_resistencia(char g[0][0],int cx, int cy){
    if(g[cx][cy]=='X'){
        return 'R';
    }else{
        return '0';
    }
}
