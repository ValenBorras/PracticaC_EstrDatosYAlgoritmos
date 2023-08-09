/******************************************************************************
Ingresar números hasta que dicho número sea negativo. 
Calcular y mostrar:
a) Cantidad de números mayores a 4 y menores a 25.
b) Promedio de aquellos números múltiplos de 6.
c) El menor número leído
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int numero, entre4y25=0, min=0, acum=0, mult6=0;
    float  avgMult6;
    do{ 
    printf("Ingrese numeros enteros: "); 
    scanf("%d", &numero); 
    if(min == 0){
        min = numero;
    }
    else if( numero < min){ 
        min = numero;
    }

    if(numero > 4 && numero < 25){
        entre4y25++ ;
    }
    
    if(numero % 6 == 0){
        acum += numero; 
        mult6++;
    }

    }while(numero >= 0); 

    avgMult6 = acum / mult6;

    printf("La cantidad de numeros mayores a 4 y menores a 25 fue de: %d\n", entre4y25); 
    printf("El promedio de los numeros multiplos de 6 es de %.2f\n", avgMult6); 
    printf("El menor numero leido fue el %d\n", min);

    return 0;
}