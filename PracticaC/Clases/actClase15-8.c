#include <stdio.h>
//las funciones se declaran fuera del main(creo)

int cargar(int arr[]); 
int mostrar(int arr[]); 

int main()
{
//Hay que siempre declarar tanto variables, como arrays, como funciones
int vec[6]; 
cargar(vec);
mostrar(vec);
return 0;
}

//desarrollo de funciones
int cargar(int arr[]){ 
    int i ; 
    for(i=0; i<6; i++){
        do{
            printf("Ingrese un valor para ael arreglo");
            scanf("%d", &arr[i]); 
        }while(arr[i]<0);
    }
}
int mostrar(int arr[]){
    int i; 
    for(i=0; i<6; i++){ 
        printf("%d\t", arr[i]);
    }
}

if()