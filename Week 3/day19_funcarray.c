#include <stdio.h>

void printArray(int array[],int size){
    int i;
    for(i=0; i<size; i++){
        printf("%d\n",array[i]);
    }
}

int main(){
    int numbers[5] = {10, 20, 30, 40, 50};
    printArray(numbers, 5);
    return 0;
}