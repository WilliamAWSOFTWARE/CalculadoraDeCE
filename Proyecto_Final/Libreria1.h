#ifdef Libreria1_H

int detectar_nodos(char g[][20], int tamano);
char dibujar_fuente_voltaje(char g[][20],int cx, int cy);
void dibujar_grafica(char grafica[][20],int tm);
char dibujar_fuente_voltaje(char grafica[0][20],int cx, int cy);
char dibujar_resistencia(char g[][20],int cx, int cy);
char dibujar_cable(char g[][20],int cx, int cy,int type);
void guarda_circuito(char grafica[][20],FILE * circuito);

void dibujo();
void calculadora();
void ver_historial();
void limpiar_historial();
#endif // Libreria1_H
