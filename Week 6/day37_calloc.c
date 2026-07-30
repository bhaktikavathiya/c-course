#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *arr;
    int i;

    printf("How many numbers? ");
    scanf("%d", &n);

    arr = calloc(n, sizeof(int));

    if(arr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Values after calloc:\n");
    for(i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }

    printf("\nEnter %d numbers:\n", n); 
    for(i=0; i<n; i++){
         scanf("%d", &arr[i]); 
    }

    printf("\nAfter entering values:\n");
    for(i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }

    arr = realloc(arr, (n+2) * sizeof(int));
    arr[n] = 100;
    arr[n+1] = 200;

    printf("\nAfter realloc - added 2 more:\n");
    for(i=0; i<n+2; i++){
        printf("%d\n", arr[i]);
    }

    free(arr);
    return 0;
}