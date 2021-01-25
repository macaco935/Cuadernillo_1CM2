
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int t, l;
    float num, r;
    
  
    l=5;
    num=0;
    r=0;
    
    printf("Total de datos\n");
    scanf("%d",&l);
    for(t=0;t<l;t++){
        printf("Ingrese un numero\n");
        
        scanf("%f",&num);
        r=num+r;
        
    }
    printf("La raíz cuadrada es:");
    printf("%.2f\n",sqrt(r));

    return (0);
}

