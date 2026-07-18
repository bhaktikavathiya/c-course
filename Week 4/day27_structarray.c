#include <stdio.h>

struct Student {
    char name[20];
    int rollno;
    float marks;
};

int main(){
    struct Student s[3];
    int i;

    for(i=0; i<3; i++){
        printf("Enter details for student %d:\n" , i+1);
        printf("Name: ");
        scanf("%s",s[i].name);
        printf("Roll No: ");
        scanf("%d", &s[i].rollno);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n--- All Students ---\n");
    for(i=0; i<3; i++){
        printf("Student %d: %s | Roll: %d | Marks: %.2f\n", i+1, s[i].name, s[i].rollno, s[i].marks);
    }

    return 0;
}