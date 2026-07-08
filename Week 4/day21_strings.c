#include <stdio.h>

int main(){

    char name[20];
    printf("Enter your name: ");
    fgets(name,20,stdin);
    printf("Hello %s\n",name);

    char city[20];
    printf("Enter your city: ");
    scanf("%s",city);
    printf("From %s",city);
    return 0;
}

