#ifndef LibreriaCalculadora_H
typedef struct
{
    char *ecuacion;
    float resultado;
}Historial;

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
float voltaje_pot_res(float p, float r);
float divisor_voltaje(float r1, float r2, float vs);

void voltaje();
void volt_corr_res();
void volt_corr_pos();
void volt_pot_res();
void div_volt();
void calcular_voltaje(char);

void corriente();
void inte_vol_res();
void inte_pot_vol();
void inte_pos_res();
void div_inte();
void calcular_corriente(char);

void resistencia();
void res_vol_corr();
void res_pot_corr();
void res_serie();
void res_paralelo();
void calcular_resistencia(char);

void historial(int);

//float calcular_porcentaje_de_regulacion(float vt, float vr);
#endif

