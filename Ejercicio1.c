/*Escriba un programa que imprima los dias de la semana
  en 2 funciones, uno que imprima los días habiles y otro que imprima
  los dias de fin de semana
*/

#include <stdio.h>

void dias_habiles();
void fin_de_semana();


void main(){
    dias_habiles();
    fin_de_semana();
}

void dias_habiles(){
    printf("Lunes, Martes, Miercoles, Jueves, Viernes, ");
}

void fin_de_semana(){
    printf("Sabado y Domingo");
}