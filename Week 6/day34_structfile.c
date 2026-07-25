#include <stdio.h>

struct Student {
    char name[20];
    int rollno;
    float marks;
};

void saveStudent(struct Student s){
    FILE *f;
    f = fopen("records.txt", "a");
    if(f == NULL){
        printf("Error opening file\n");
        return;
    }
    fprintf(f, "%s %d %.2f\n", s.name, s.rollno, s.marks);
    fclose(f);
}

void readStudents(){
    FILE *f;
    char name[20];
    int rollno;
    float marks;

    f = fopen("records.txt", "r");
    if(f == NULL){
        printf("No records found\n");
        return;
    }

    printf("--- All Records ---\n");
    while(fscanf(f, "%s %d %f", &name, &rollno, &marks) == 3){
        printf("Name: %s | Roll: %d | Marks: %.2f\n", name, rollno, marks);
    }
    fclose(f);
}

int main(){
    struct Student s1 = {"Bhakti", 1, 90.0};
    struct Student s2 = {"Raj", 2, 78.0};
    struct Student s3 = {"Priya", 3, 85.0};

    saveStudent(s1);
    saveStudent(s2);
    saveStudent(s3);

    readStudents();
    return 0;
}