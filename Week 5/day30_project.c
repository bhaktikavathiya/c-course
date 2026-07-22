#include <stdio.h>

struct Student {
    char name[20];
    int rollno;
    float marks;
    char city[20];
};

void getStudents(struct Student s[]){
    int i;
    for(i=0; i<3; i++){
        printf("\nEnter details for Student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Rollno: ");
        scanf("%d", &s[i].rollno);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
        printf("City: ");
        scanf("%s", s[i].city);
    }
};

void printStudents(struct Student s[]){
    int i;
    for(i=0; i<3; i++){
        printf("Student %d: %s | Roll: %d | Marks: %.2f | City: %s\n",
       i + 1,
       s[i].name,
       s[i].rollno,
       s[i].marks,
       s[i].city);
    }
};

void findTopper(struct Student s[]){
    int topper = 0;
    for(int i = 1; i < 3; i++)
    {if(s[i].marks > s[topper].marks){
            topper = i;
        }
    }
        printf("\n--- Topper ---\n");
        printf("Name: %s\n", s[topper].name);
        printf("Roll No: %d\n", s[topper].rollno);
        printf("Marks: %.2f\n", s[topper].marks);
        printf("City: %s\n", s[topper].city);
}

int main() {
    struct Student s[3];
    getStudents(s);
    printf("\n--- All Students ---\n");
    printStudents(s);
    findTopper(s);

    return 0;
}