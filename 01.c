
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float a, b, c, p;
    
    a=0;
    b=0;
    c=0;
    p=0;
    
    printf("Ingrese la primer calificación \n");
     scanf("%f",&a);
    
    printf("Ingrese la seguanda calificación \n");
     scanf("%f",&b);
   
    printf("Ingrese la tercera calificación \n");
     scanf("%f",&c);
     
     p=(a+b+c)/3;
     
     if (p >= 6){
         printf("El promedio es aprobatorio\n");
         
     }
      else {
             printf ("El promedio no es aprobatorio");
         }
     
    return (0);
}

