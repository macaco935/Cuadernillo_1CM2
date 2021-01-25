
#include <stdio.h>
#include <stdlib.h>

void verificar();
void cua();
void rec();
void tr();

int main() {
    
    int opcion;
    do{
        opcion = 0;
        printf("1)Calcular el área de un cuadrado\n");
        printf("2)Calcular el área de un rectángulo\n");
        printf("3)Calcular el área de un triangulo\n");
        printf("4)Cerrar progrma\n");
        scanf("%d",&opcion);
        verificar(opcion);
        
    }while(opcion!= 4);
    return (EXIT_SUCCESS);

    return (0);
}
void verificar(int opcion){
    switch(opcion){
            case 1:
                cua();
                break;
            case 2:
                rec();
                break;
            case 3:
                tr();
                break;
                
        case 4:
            break;
    }
}
void cua(){
    printf("Introdusca la base \n");
    float b;
    scanf("%f",&b);
    float a= b*b;
    
    printf("El el áreaes:%f\n",a);

}
void rec(){
    printf("Introdusca la base \n");
    float b;
    scanf("%f",&b);
    printf("Introdusca la altura\n");
    float h;
    scanf("%f",&h);
    float a= b*h;
    
    printf("El el áreaes:%f\n",a);
}
void tr(){
    printf("Introdusca la base \n");
    float b;
    scanf("%f",&b);
    printf("Introdusca la altura\n");
    float h;
    scanf("%f",&h);
    float a= (b*h)/2;
    
    printf("El el áreaes:%f\n",a);
}