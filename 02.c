
#include <stdio.h>
#include <stdlib.h>


int main() {
    
    float ct, d;
    
    printf("Introduzca la compra total \n");
    scanf("%f",&ct);
    
    if(ct > 500){
        printf("Se hara un descuento del 30 porciento\n");
        d = ct * 0.30;
        ct= ct - d;
        printf("El total de la compra con el descuento es de: %f\n",ct);
    }
    else{
        printf("no se hara ningun descuento\n");
    }

    return (0);
}

