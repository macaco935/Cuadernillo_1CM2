
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    float num, p;
    
    printf("ingrese el numero y despues la potencia\n");
    scanf("%f",&num);
    scanf("%f",&p);
    
    printf("El resultado es:\n");
     
    printf("%.2f\n", pow(num,p));
    

    return (0);
}

