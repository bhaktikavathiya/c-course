#include <stdio.h>
int calculateTotal(int arr[], int size){
  int i;
  int sum = 0;
  for(i=0; i<size; i++){
    sum = sum + arr[i];
  }
  return sum;
}

float calculateAverage(int arr[],int size){
  float average;
  average = calculateTotal(arr, size) / (float)size;
  return average;
}

int findMax(int arr[],int size){
    int i;
    int max = arr[0];
    for(i=1; i<size; i++)
    if(arr[i] > max){
        max = arr[i];
    }
    return max;
}

int main(){
    int marks[5];
    int i;
    
    printf("Enter marks for 5 subjects: ");
    for(i=0; i<5; i++){
    printf("Subject %d: ", i+1);
    scanf("%d", &marks[i]);
    }

    int total = calculateTotal(marks, 5);
    float average = calculateAverage(marks, 5);
    int highest = findMax(marks, 5);

    printf("Total marks: %d\n ", total);
    printf("Average marks: %.2f\n ", average);
    printf("Highest marks: %d\n ", highest);
    
    return 0;
}