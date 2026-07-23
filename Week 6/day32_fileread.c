#include <stdio.h>

int main(){
    FILE *f;
    char line[100];

    f = fopen("students.txt", "r");

    if(f == NULL){
        printf("File not found\n");
        return 1;
    }

    printf("--- Reading from file ---\n");
    while(fgets(line, 100, f) != NULL){
        printf("%s", line);
    }

    fclose(f);
    return 0;

}