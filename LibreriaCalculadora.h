#ifndef LibreriaCalculadora_H
//Calculo de la Resistencia
float resistencia_vol_corriente(float v, float i);
float resistencia_pot_corriente(float p, float i);
float resistencia_equivalente_serie(float r1, float r2);
float resistencia_equivalente_paralelo(float r1, float r2);

//Calculo de la Intensidad
float intensidad_vol_res(float v, float r);
float intensidad_pot_vol(float p, float v);
float intensidad_pot_res(float p, float r);
float divisor_corriente(float is, float r1, float r2);

//Calculo del Voltaje
float voltaje_corriente_res(float r, float i);
float voltaje_corriente_pot(float p, float i);
float divisor_voltaje(float r1, float r2, float vs);
#endif

