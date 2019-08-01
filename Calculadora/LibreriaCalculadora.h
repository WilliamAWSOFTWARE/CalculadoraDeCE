#ifndef LibreriaCalculadora_H
typedef struct{
    float V;
    float I;
    float P;
    float R1;
    float R2;
    float R;
}RESISTENCIA;

typedef struct{
    float V;
    float Is;
    float P;
    float R1;
    float R2;
    float R;
    float I;
}CORRIENTE;

typedef struct{
    float I;
    float Vs;
    float P;
    float R1;
    float R2;
    float R;
    float V;
}VOLTAJE;

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
void calcular_voltaje(char, VOLTAJE*, int);
void histoialvoltaje_corr_res(VOLTAJE *, int);
void histoialvoltaje_corr_pot(VOLTAJE *, int);
void histoialvoltaje_pot_res(VOLTAJE *, int);
void histoialvoltaje_div_volt(VOLTAJE *, int);

void corriente();
void inte_vol_res();
void inte_pot_vol();
void inte_pos_res();
void div_inte();
void calcular_corriente(char, CORRIENTE*, int);
void histoialcorriente_vol_res(CORRIENTE *, int);
void histoialcorriente_pot_vol(CORRIENTE *, int);
void histoialcorriente_pot_res(CORRIENTE *, int);
void histoialcorriente_div_inte(CORRIENTE *, int);

void resistencia();
void res_vol_corr();
void res_pot_corr();
void res_serie();
void res_paralelo();
void calcular_resistencia(char, RESISTENCIA*, int);
void histoialresistencia_vol_inte(RESISTENCIA *, int);
void histoialresistencia_pot_inte(RESISTENCIA *, int);
void histoialresistencia_serie(RESISTENCIA *, int);
void histoialresistencia_paralelo(RESISTENCIA *, int);


int validar_respuesta_menu1(int);
int validar_respuesta_menu2(char);
int validar_respuesta_menu3(int);

#endif

