#include <stdio.h>

void printArray(int arr[], int size){
    int i;
    for(i=0; i<size; i++){
        printf("%d\n", arr[i]);
    }
}

int findMax(int arr[], int size){
    int i;
    int max = arr[0];
    for(i=1; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int numbers[5] = {10, 20, 30, 40, 50};
    int largest;

    printf("Array is:\n");
    printArray(numbers, 5);

    largest = findMax(numbers, 5);
    printf("Largest number is %d\n", largest);

    return 0;
}