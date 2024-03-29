

//LEY DE SUMATORIA DE VOLTAJE = 0 DE KIRCHHOFF
float LVK(int vi[]);
//LEY DE SUMATORIA DE CORRIENTE = 0 DE KIRCHHOFF
float LIK(int ai[]);
//LEY DE OHM R=V/I
float calc_res_ohm(int voltaje, int intensidad);
//LEY DE OHM I=V/R
float calc_int_ohm(int resistencia, int voltaje);
//LEY DE OHM V=R*I
float calc_vol_ohm(int resistencia, int intensidad);
//TRANSFORMACION DE FUENTES
float trans_fuentes_ohm(int voltaje_o_intensidad, int resistencia, int opcion);
/*DESPUES
float analisis_de_nodos(int [], int []);
float analisis_de_mallas(int [], int []);
*/
//DETERMINA EL VALOR DE LA RESISTENCIA POR SU CODIGO DE COLOR
float calcular_valores_resistencia_cod_color(int colores[]);
//CALCULAR LA RESISTENCIA TOTAL DE UN CLABLE SEGUN SU MATERIAL, TEMPERATURA Y RESISTENCIA/1000FT
float calcular_res_cable(float resistencia ,float longitud, float radio);
float calcular_porcentaje_de_regulacion(float valor_teorico, float valor_real);
float calcular_potencia(float voltaje, float intensidad, float resistencia);
float divisores_de_voltaje(float resistencias[], float corriente);
float divisores_de_corriente(float resistencias[], float voltaje);
float resistencia_equivalente(float resistencias[]);
int detectar_nodos(char g[][20], int tamano);
char dibujar_fuente_voltaje(char g[][20],int cx, int cy);
void dibujar_grafica(char grafica[][20],int tm);
char dibujar_fuente_voltaje(char grafica[0][20],int cx, int cy);
char dibujar_resistencia(char g[][20],int cx, int cy);
char dibujar_cable(char g[][20],int cx, int cy,int type);
void guarda_circuito(char grafica[][20],FILE * circuito);
