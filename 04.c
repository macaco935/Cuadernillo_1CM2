

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    
    float a;
    
    printf("introdusca un numero\n");
    scanf("%f",&a);
    
    if( a > 0){
        printf("El numero es positivo\n");
        
    }
    else if(a ==0){
            printf("El numero es neutro\n");
        }
    else{
        printf("El numero es negativo\n");
    }


    return (0);
}

