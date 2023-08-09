#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int peso;
    float estatura, indice; 
    printf("Ingrese su peso: "); 
    scanf("%d", &peso); 
    printf("Ingrese su estatura: ");
    scanf("%f", &estatura); 

    indice = peso / (estatura * estatura); 

    printf("Su indice de masa corporal es de: %f", indice);

    return 0;
}

