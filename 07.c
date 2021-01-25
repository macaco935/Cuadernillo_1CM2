
#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int f, t;
    float b, h ,a;
    f=3;
    t=0;
    b=0;
    h=0;
    a=0;
    
    
    while(t < f){
       
        printf("Ingrese la base \n");
        scanf("%f",&b);
        printf("Ingrese la altura \n");
        scanf("%f",&h);
        a=(b*h)/2;
        printf("área es:%f\n",a);
        b=0;
        h=0;
        a=0;
        t=t+1;
    }

    return (0);
}

