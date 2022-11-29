#include <stdio.h>

void square(int *x){
    *x *= *x;
}

int main()
{
    int n;
    printf("n = "); scanf("%d", &n);
    
    square(&n);
    
    printf("N ning kvadrati: %d\n", n);

    return 0;
}
