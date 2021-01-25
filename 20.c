
#include <stdio.h>
#include <stdlib.h>

void positivo();
void negativo();
int main() {
    
    float a;
    
    printf("introdusca un numero\n");
    scanf("%f",&a);
    
    if( a > 0){
        positivo();
    }
    else if(a ==0){
            printf("El numero es neutro\n");
        }
    else{
        negativo();
    }


    return (0);
}

void positivo(){
    printf("El numero es positivo\n");
        
}
void negativo(){
    printf("El numero es negativo\n");
}