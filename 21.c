
#include <stdio.h>
#include <stdlib.h>


int main() {
    
  int* p;                                                            
  int a[5];

  p = &a[0];                                                     
  a[0] = 4;
  printf("%d\n", *p);                                         

  a[0] = 883;
  printf("%d\n", *p);         

  *p = 999;                                                
  printf("%d\n", *p);

    return (0);
}

