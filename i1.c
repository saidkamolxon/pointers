#include <stdio.h>

void output_address(int x){
    printf("Adress: %p\n", &x);    
}

int main()
{
    int n;
    
    output_address(n);


    return 0;
}
