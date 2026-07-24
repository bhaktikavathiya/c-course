#include <stdio.h>

int main(){
    FILE *f;

    f = fopen("students.txt", "a");

    if(f == NULL){
        printf("Error opening file\n");
        return 1;
    }

    fprintf(f, "\nName: Raj\n");
    fprintf(f, "Roll No: 2\n");
    fprintf(f, "Marks: 78.00\n");

    fclose(f);
    printf("Data appended successfully\n");
    return 0;
}