

#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int p, u;
    
   
    printf ("Introduzca un numero entero\n");
    scanf("%d",&p);
    
    printf ("Introduzca un numero \n");
    scanf("%d",&u);
    
    if(p > u){
        printf("El ultimo numero es menor\n");
    }
    else{
         printf("El ultimo numero es mayor\n");
    }
 

    return (0);
}

