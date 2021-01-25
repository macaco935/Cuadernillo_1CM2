

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int x,t;
    printf("Introdusca el numero total de articulos\n");
    scanf("%d",&x);
    
    float v=0,ct,d;
    float e[x];

    for(t=0;t<=x;t++){
          
        printf("Ingrese el valor del articulo %d\n",t);
        scanf("%f",&v);
         e[t]=v;
         ct=ct+e[t];
         v=0;
    }

    if(ct > 350){
        printf("Se hara un descuento del 20 porciento\n");
        d = ct * 0.20;
        ct= ct - d;
        printf("El total de la compra con el descuento es de: %f\n",ct);
    }
    else{
        printf("no se hara ningun descuento\n");
        printf("El total de la compra es de: %f\n",ct);
    }

    return (0);
}

