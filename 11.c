
#include <stdio.h>
#include <stdlib.h>


int main() {
    int x,t;
    printf("Introdusca el numero total de elementos\n");
    scanf("%d",&x);
    
    float v=0;
    float b[x];
    float h[x];
    float a[x];
    
    for(t=0;t<=x;t++){
          
        printf("Ingrese la base %d\n",t);
        scanf("%f",&v);
         b[t]=v;
         v=0;
        printf("Ingrese la altura %d\n",t);
        scanf("%f",&v);
        h[t]=v;
        v=0;
       
    }
    
    for(t=0;t<=x;t++){
            a[t]=(b[t]*h[t])/2; 
        printf("El area del triangulo %d es: %f\n",t,a[t]);

    }
    
    return (0);
}

