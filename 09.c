
#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int opcion;
    float r,n1,n2;
    n1=0;
    n2=0;
    r=0;
    
    printf("Ingrese un numero\n");
    scanf("%f",&n1);
    printf("Ingrese un numero\n");
    scanf("%f",&n2);
    
    printf("que hacer \n");
    printf("1.Sumar\n");
    printf("2.Restar\n");
    scanf("%d",&opcion);
    switch(opcion){
        case 1:
            printf("El resultado de la  suma es:\n");
            r=n1+n2;
            printf("%f",r);
           break;
        case 2:
            printf("El resultado de la  resta es:\n");
           r=n1-n2;
            printf("%f",r);
            break ;
    }
    return (0);
}

