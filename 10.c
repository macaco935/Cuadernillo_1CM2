
#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int opcion;
    float cm,pl;
    pl=0;
    cm=0;
    
    printf("1.Centímetros a pulgadas\n");
    printf("2.Pulgadas a centímetros\n");
    scanf("%d",&opcion);
    switch(opcion){
        case 1:
            printf("Ingrese un los centímetros\n");
            scanf("%f",&cm);
            pl=cm/2.54;
            printf("El resultado es:%f\n",pl);  
           break;
           
        case 2:
            printf("Ingrese un las pulgadas\n");
            scanf("%f",&pl);
            cm=pl*2.54;
            printf("El resultado es:%f\n",cm);  
            break ;
    }
    

    return (0);
}

