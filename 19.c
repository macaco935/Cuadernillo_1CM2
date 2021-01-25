

#include <stdio.h>
#include <stdlib.h>
void par();
void impar();
int main() {
    
     int n;
    
    printf("Ingrese un número\n");
    scanf("%d",&n);
    
    if(n % 2 == 0){
        par();
        
    }
    else{
        impar();
    }

    
    return (0);
}
void par(){
    printf("Es par\n");
}
void impar(){
    printf("Es impar\n");
}
