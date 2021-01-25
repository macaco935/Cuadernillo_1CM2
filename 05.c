

#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int n;
    
    printf("Ingrese un número\n");
    scanf("%d",&n);
    
    if(n % 2 == 0){
        printf("Es par\n");
    }
    else{
        printf("Es impar\n");
    }

    return (0);
}

