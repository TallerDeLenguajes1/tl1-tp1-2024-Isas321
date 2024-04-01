#include <stdio.h>

int main(){
    //printf("Hola mundo");
    int variable = 2;
    int *puntero=&variable;

    printf("\nContenido del puntero %d", *puntero);
    printf("\nDireccion del puntero %d", &puntero);
    printf("\nDireccion de memoria de la variable %d", variable);
    printf("\nDireccion de momoria del puntero %d", &*puntero);
    printf("\nTamanio de memoria utilizado por la variable %d bits", sizeof(variable));
    printf("\nTamanio de memoria utilizado por el puntero %d bits", sizeof(*puntero));
    printf("\n\n\n");
    return 0;
}