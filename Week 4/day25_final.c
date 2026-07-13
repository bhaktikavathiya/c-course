#include <stdio.h>

     int calculateTotal(int arr[],int size){
        int i;
        int sum = 0;
        for(i=0; i<size; i++){
            sum = sum + arr[i];
        }
        return sum;
    }

    float calculateAverage(int arr[], int size){
        float average;
        average = calculateTotal(arr, size) / (float)size;
        return average;
    }

    int findTopper(float avg[], int size){
        int i;
        int top = 0;
        for(i=1; i<size; i++){
            if(avg[i] > avg[top])
            top = i;
        }
        return top;
    }
   
int main(){
    int i, j;
    char names[3][20];
    int marks[3][3];
    float average[3];

    for(i=0; i<3; i++){
        printf("Enter name of student %d: ", i+1);
        scanf("%s", names[i]);
    }   

    
    for(i=0; i<3; i++){
        printf("Enter marks for student %d:\n", i+1);
            for(j=0; j<3; j++){
             scanf("%d", &marks[i][j]);
            }
    }

    for (i=0; i<3; i++){
        average[i] = calculateAverage(marks[i], 3);
    }

    printf("========================\n");
    printf("\nSTUDENT REPORT CARD\n");
    printf("========================\n");

    for(i=0; i<3; i++){
        printf("Student %d: %s\n", i+1, names[i]);
        printf("Marks: %d %d %d\n", marks[i][0], marks[i][1], marks[i][2]);
        printf("Average: %.2f\n", average[i]);
    }
    
    int top = findTopper(average, 3);
    printf("========================\n");
    printf("Topper: %s\n", names[top]);
    printf("Highest Average: %.2f\n", average[top]);
    printf("========================\n");

    return 0;
}