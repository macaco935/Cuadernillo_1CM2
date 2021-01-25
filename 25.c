

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
      int x,t;
    printf("Introdusca el numero total de elementos\n");
    scanf("%d",&x);
    
    float v=0;
    float e[x];

    for(t=0;t<=x;t++){
          
        printf("Ingrese el valor del elemento %d\n",t);
        scanf("%f",&v);
         e[t]=v;
         v=0;
    }
    
    printf("-----------------\n");
   for(t=0;t<=x;t++){
       printf("El elemento %d a la segunda potencia es:\n",t);
        printf("%.2f\n", pow(e[t],2));
    }
 
    return (0);
}

