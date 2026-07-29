#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *arr;
    int i;

    printf("How many numbers? ");
    scanf("%d", &n);

    arr = malloc(n * sizeof(int));

    if(arr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("You entered:\n");
    for(i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }

    free(arr);
    printf("Memory freed\n");

    return 0;
}