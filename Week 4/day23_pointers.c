#include <stdio.h>

int main(){

    int age = 18;
    int *ptr = &age;

    printf("Value of age: %d\n", age);
    printf("Address of age: %p\n", &age);
    printf("Pointer stores: %p\n", ptr);
    printf("Value at pointer: %d\n", *ptr);

    *ptr = 25;
    printf("New value of age: %d\n", age);

    return 0;
}