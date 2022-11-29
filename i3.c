#include <stdio.h>

void reverse(int *x){
    *x = *x%10*10 + *x/10;
}

int main()
{
    int n;
    printf("n = "); scanf("%2d", &n);
    
    reverse(&n);
    
    printf("%d\n", n);

    return 0;
}
