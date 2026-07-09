#include <stdio.h>
#include <string.h>

int main(){
    char name[20] = "Bhakti";

    printf("Name: %s\n", name);
    printf("Length: %d\n", strlen(name));

    char copy[20];
    strcpy(copy, name);
    printf("Copy: %s\n", copy);

    char greeting[20] = "Hello ";
    strcat(greeting , "Bhakti");
    printf("Greeting: %s\n",greeting);

    return 0;
}