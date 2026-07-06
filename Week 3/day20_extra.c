#include <stdio.h>

int findMin(int arr[],int size){
    int i;
    int min = arr[0];
    for(i=1; i<size; i++)
    if(arr[i] < min){
        min = arr[i];
    }
    return min;
}

int main(){
    int i;
    int numbers[5];

    printf("Enter 5 numbers: \n");

    for(i=0; i<5; i++){
    printf("Number %d: ", i+1);
    scanf("%d", &numbers[i]);
    }

    printf("The lowest number is %d ", findMin(numbers,5));
    
    return 0;
}