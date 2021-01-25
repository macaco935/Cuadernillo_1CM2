
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void verificar();
void raiz();
void funcion();

int main() {
    
    int opcion;
    do{
        opcion = 0;
        printf("1)Calcular la raiz cuadrada\n");
        printf("2)Calcular la funcion exponencial\n");
        printf("3)Cerrar progrma\n");
        scanf("%d",&opcion);
        verificar(opcion);
        
    }while(opcion!= 3);
    return (EXIT_SUCCESS);

    return (0);
}
void verificar(int opcion){
    switch(opcion){
            case 1:
                raiz();
                break;
            case 2:
                funcion();
                break;    
        case 3:
            break;
    }
}
void raiz(){
   printf("Introdusca el valor de x \n");
    float x;
    scanf("%f",&x);
     printf("La raiz cuadrada es:\n");
     printf("%.2f\n",sqrt(x));
  

}
void funcion(){
    printf("Introdusca el valor de x \n");
    float x;
    scanf("%f",&x);
     printf("La funcion exponencial es:\n");
     printf("%.2f\n",exp(x));
  
   
}