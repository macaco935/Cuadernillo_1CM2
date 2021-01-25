
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int x,t;
    printf("Introdusca el numero total de elementos\n");
    scanf("%d",&x);
    
    float v=0,n1,n2,r;
    float e[x];

    for(t=0;t<=x;t++){
          
        printf("Ingrese el valor del elemento %d\n",t);
        scanf("%f",&v);
         e[t]=v;
         v=0;
    }
    
    printf("1° Elemento que se calculara:\n");
    scanf("%d",&t);
    n1=e[t];
    printf("2° Elemento que se calculara:\n");
    scanf("%d",&t);
    n2=e[t];
    
    r=n1*n2;
    printf("El resultado de la multiplicación es:\n%f\n",r);
    

    return (0);
}

