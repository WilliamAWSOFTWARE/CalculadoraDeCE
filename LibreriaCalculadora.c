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

//Calculo del Voltaje
float voltaje_corriente_res(float r, float i){
return r*i;
}
float voltaje_corriente_pot(float p, float i){
return p/i;
}
float divisor_voltaje(float r1, float r2, float vs){
return (r1/(r1+r2))*vs;
}

