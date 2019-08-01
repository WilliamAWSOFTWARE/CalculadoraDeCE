#include "../Proyecto_Final/Libreria2.h"
#include "minunit.h"
#include <string.h>

//Prueba de funciones que calculan la resistencia
MU_TEST(test_resistencia_1) {
	mu_assert_double_eq(resistencia_vol_corriente(50, 10),5);
}
MU_TEST(test_resistencia_2) {
	mu_assert_double_eq(resistencia_pot_corriente(36, 4),2.25);
}
MU_TEST(test_resistencia_3) {
	mu_assert_double_eq(resistencia_equivalente_serie(50, 20),70);
}
MU_TEST(test_resistencia_4) {
	mu_assert_int_eq(resistencia_equivalente_paralelo(40, 30),17.14);
}
//Prueba de funciones que calculan la corriente
MU_TEST(test_corriente_1) {
	mu_assert_double_eq(intensidad_vol_res(30, 20),1.5);
}
MU_TEST(test_corriente_2) {
	mu_assert_double_eq(intensidad_pot_vol(80, 20),4);
}
MU_TEST(test_corriente_3) {
	mu_assert_int_eq(intensidad_pot_res(150, 10),3.87);
}
MU_TEST(test_corriente_4) {
	mu_assert_double_eq(divisor_corriente(14,30,20),5.6);
}
//Prueba de funciones que calculan dl voltaje
MU_TEST(test_voltaje_1) {
	mu_assert_double_eq(voltaje_corriente_res(50,2),100);
}
MU_TEST(test_voltaje_2) {
	mu_assert_int_eq(voltaje_corriente_pot(80, 14),5.71);
}
MU_TEST(test_voltaje_3) {
	mu_assert_int_eq(voltaje_pot_res(150, 25),61.24);
}
MU_TEST(test_voltaje_4) {
	mu_assert_double_eq(divisor_voltaje(15,25,30),11.25);
}
//Prueba de funciones para validar Menus
MU_TEST(test_menu_1) {
	mu_assert_int_eq(validar_respuesta_menu1(3),1);
}
MU_TEST(test_menu_2) {
	mu_assert_int_eq(validar_respuesta_menu1(7),-1);
}
MU_TEST(test_menu_3) {
	mu_assert_int_eq(validar_respuesta_menu3(2),1);
}
MU_TEST(test_menu_4) {
	mu_assert_int_eq(validar_respuesta_menu3(0),-1);
}
MU_TEST(test_menu_5) {
	mu_assert_int_eq(validar_respuesta_menu4(1),1);
}
MU_TEST(test_menu_6) {
	mu_assert_int_eq(validar_respuesta_menu4(-5),-1);
}
MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_resistencia_1);
    MU_RUN_TEST(test_resistencia_2);
    MU_RUN_TEST(test_resistencia_3);
    MU_RUN_TEST(test_resistencia_4);
    MU_RUN_TEST(test_corriente_1);
    MU_RUN_TEST(test_corriente_2);
    MU_RUN_TEST(test_corriente_3);
    MU_RUN_TEST(test_corriente_4);
    MU_RUN_TEST(test_voltaje_1);
    MU_RUN_TEST(test_voltaje_2);
    MU_RUN_TEST(test_voltaje_3);
    MU_RUN_TEST(test_voltaje_4);
    MU_RUN_TEST(test_menu_1);
    MU_RUN_TEST(test_menu_2);
    MU_RUN_TEST(test_menu_3);
    MU_RUN_TEST(test_menu_4);
    MU_RUN_TEST(test_menu_5);
    MU_RUN_TEST(test_menu_6);
}

int main()
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return 0;
}

