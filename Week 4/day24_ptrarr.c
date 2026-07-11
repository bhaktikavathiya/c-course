#include <stdio.h>
int main(){
    int number[5] = {10,20,30,40,50};
    int *ptr = number;
    
    printf("First element: %d\n", *ptr);
    printf("Second element: %d\n",*(ptr+1));
    printf("Third element: %d\n", *(ptr+2));

    printf("\nUsing loop:\n");
    int i;
    for(i=0; i<5; i++){
        printf("%d\n", *(ptr+i));
    }
    return 0;
}