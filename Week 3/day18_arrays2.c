#include <stdio.h>

int main(){
int numbers[5];
int i;

printf("Enter 5 numbers:\n");
for(i=0; i<5; i++){
    scanf("%d", &numbers[i]);
}

printf("You entered:\n");
for(i=0; i<5; i++){
    printf("%d\n", numbers[i]);
}

int max = numbers[0];
for(i=1; i<5; i++){
    if(numbers[i] > max){
        max = numbers[i];
    }
}

    printf("The maximum number is %d", max);

return 0;

}