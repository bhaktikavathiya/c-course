#include <stdio.h>
#include <string.h>

int main(){

    char name[20];
    printf("Enter your First Name: ", name);
    scanf("%s", name);

    char lastname[20];
    printf("Enter your Last Name: ", lastname);
    scanf("%s", lastname);
    
    strcat(name," ");
    strcat(name,lastname);
    printf("Full name: %s\n", name);

    printf("Length: %d\n",strlen(name));

    return 0;
}