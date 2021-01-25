

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int x,t;
    printf("Introdusca el numero total de elementos\n");
    scanf("%d",&x);
    
    float v=0;
    float r[x];
   
    
    

    for(t=0;t<=x;t++){
          
        printf("Ingrese el valor del elemento %d\n",t);
        scanf("%f",&v);
         r[t]=v;
         v=0;
    }
    
    printf("Elemento que se calculara:\n");
    scanf("%d",&t);
    printf("La raíz cuadrada es:");
    printf("%.2f\n",sqrt(r[t]));
    
    return (0);
}

