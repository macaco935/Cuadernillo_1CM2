
#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int n1, t;
    n1=0;
    t=0;
    
    printf("introdusca el limite del conteo\n");
    scanf("%d",&t);
    
    printf("---------------------------------------\n");
    
    while( n1 < t){
        n1=n1+1;
        printf ("%d\n", n1); 
    }

    return (0);
}

