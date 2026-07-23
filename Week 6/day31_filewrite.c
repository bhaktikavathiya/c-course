#include <stdio.h>

int main(){
    FILE *f;
    f = fopen("students.txt", "w");

    if(f == NULL){
        printf("Error opening file\n");
        return 1;
    }

    fprintf(f, "Name: Bhakti\n");
    fprintf(f, "Roll No: 1\n");
    fprintf(f, "Marks: 90.00\n");

    fclose(f);
    printf("Data written successfully\n");
    return 0;
}