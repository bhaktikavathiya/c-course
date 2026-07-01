#include <stdio.h>

int add(int a , int b){
    int result;
    result = a + b;
    return result;
}

int sub(int a, int b){
    int result;
    result = a - b;
    return result;
}

int multiply(int a,int b){
    int result;
    result = a*b;
    return result;
}

int main(){
    int answer;

    answer = add (5,3);
    printf("5 + 3 = %d\n", answer);

    answer = sub (5,3);
    printf("5 - 3 = %d\n", answer);

    answer = multiply (5,3);
    printf("5 x 3 = %d\n", answer);
    
    return 0;
}