#include <stdio.h>

void nombre();
void a_paterno();
void a_materno();
void enter();
void apellidoscompletos();
void nombrescompletos();

void main(){
        apellidoscompletos();
        nombrescompletos();
}

void nombre(){
    printf("Irvin Javier ");
}

void a_paterno(){
    printf("Sanchez ");
}

void a_materno(){
    printf("Contreras ");
}

void enter(){
    printf("\n");
}

void apellidoscompletos(){
    a_paterno();
    a_materno();
    nombre();
    enter();
}

void nombrescompletos(){
    nombre();
    a_paterno();
    a_materno();
}