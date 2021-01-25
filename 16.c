

#include <stdio.h>
#include <stdlib.h>

void verificar();
void cmpy();
void pycm();

int main() {
    
    int opcion;
    do{
        opcion = 0;
        printf("1)Convertir de centímetros a pulgadas y metros a yardas\n");
        printf("2)Convertir de pulgadas a centímetros y yardas a metros.\n");
        printf("3)Cerrar progrma\n");
        scanf("%d",&opcion);
        verificar(opcion);
        
    }while(opcion!= 3);
    return (EXIT_SUCCESS);

    return (0);
}
void verificar(int opcion){
    switch(opcion){
            case 1:
                cmpy();
                break;
            case 2:
                pycm();
                break;
            case 3:
                break;
    }
}
void cmpy(){
    printf("Introdusca los cm\n",163);
    float cm;
    scanf("%f",&cm);
    printf("Introdusca los m\n",163);
    float m;
    scanf("%f",&m);
    float p= cm/2.54;
    float y= m*1.094;
    printf("Las pulgadas son %f:\n",p);
    printf("Las yardas son %f:\n",y);

}
void pycm(){
    printf("Introdusca las pulgadas\n",163);
    float p;
    scanf("%f",&p);
    printf("Introdusca las yardas\n",163);
    float y;
    scanf("%f",&y);
    float cm= p*2.54;
    float m= y/1.094;
    printf("Los  centimetros son %f:\n",cm);
    printf("Los metros son %f:\n",m);

}