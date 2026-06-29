#include <stdio.h>

void printHello(){
    printf("Hello from a function!\n");
} 


void printName(){
    printf("Bhakti Kavathiya\n");
}
void printGreeting(int num){
    printf("You are a student number %d\n" , num);
}

void printTable(int num){
    int i;
    for(i=1; i<=10; i++){
        printf("%d x %d = %d\n", num , i, num*i); 
    }
}

int main(){
printHello();
printName();
printGreeting(1);
printTable(5);
return 0;
}