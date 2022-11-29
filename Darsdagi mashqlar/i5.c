#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_array(int array[], int n){

    for(int i = 0; i < n; i++){
        array[i] = 1 + rand()%10;
        printf("%d ", array[i]);
    }
    puts("");

}

void findIndexes(int array[], int n, int *firstOdd, int *firstEven){
    
    for(int i = 0; i < n; i++){
        if(array[i]%2){
            *firstOdd = i;
            break;
        }
    }
    
    for(int i = 0; i < n; i++){
        if(array[i]%2==0){
            *firstEven = i;
            break;
        }
    }

}



int main(){
    srand(time(0));

    int n;
    printf("n = "); scanf("%d", &n);

    int array[n], index_firstOdd, index_firstEven;

    fill_array(array, n);
    
    findIndexes(array, n, &index_firstOdd, &index_firstEven);


    printf("juft_index = %d\ntoq_index = %d\n", index_firstEven, index_firstOdd);

    return 0;

}