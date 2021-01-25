
#include <stdio.h>
#include <stdlib.h>


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
    t=x;
    while(t<= x && t>=0){
        printf("%f\n",e[t]);
        t=t-1;
    }
    
   

    return (0);
}

