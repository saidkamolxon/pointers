#include <stdio.h>

void change(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main(){

    int a, b;

    printf("a = "); scanf("%d", &a);
    printf("b = "); scanf("%d", &b);

    change(&a, &b);

    printf(">>>>\na = %d\nb = %d\n", a, b);

    return 0;

}