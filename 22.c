
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void verificar();
void raiz();
void funcion();


int main() {
    
     int* p;                                                            
  int a[5];
  int t=0,v,v2;
  for(t=0;t<=5;t++){
          
        printf("Ingrese el valor del elemento %d\n",t);
        scanf("%d",&v);
         a[t]=v;
         v=0;
    }
 
  printf("Escoger una casilla del areglo\n");
  scanf("%d",&t);
   p= &a[t];
   
   printf("el nuevo valor de esa casilla es:\n");
   scanf("%d",&v);
  *p = v;
  printf("casilla= %d\n", a[t]);
  

      return (0);
}
