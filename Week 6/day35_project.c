#include <stdio.h>

struct Students {
    char name[20];
    int rollno;
    float marks;
};

void saveStudent(struct Students s){
    FILE *f;
    f = fopen("students.txt", "a");
    if(f == NULL){
        printf("Error opening file\n");
        return;
    }

    fprintf(f, "%s %d %.2f\n",
        s.name, s.rollno, s.marks);
    fclose(f);
}

void readStudents(){
    FILE *f;
    char name[20];
    int rollno;
    float marks;

    f = fopen("students.txt", "r");
    if(f == NULL){
        printf("No records found\n");
        return;
    }

    printf("--- All Records ---\n");
    while(fscanf(f, "%s %d %f", name, &rollno, &marks) == 3){
        printf("Name: %s | Roll: %d | Marks: %.2f\n", name, rollno, marks);
    }
    fclose(f);
}

int main(){
    int choice = 0;

    while(choice != 3){
        printf("\n=== Student Record System ===\n");
        printf("1. Add Student\n");
        printf("2. View All Students\n");
        printf("3. Exit\n");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:{
                struct Students s;
                printf("Enter name: ");
                scanf("%s", s.name);
                printf("Enter roll number: ");
                scanf("%d", &s.rollno);
                printf("Enter marks: ");
                scanf("%f", &s.marks);
                saveStudent(s);
                printf("Student saved successfully!\n");
                break;
            }
            case 2:
                readStudents();
                break;
            case 3:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}