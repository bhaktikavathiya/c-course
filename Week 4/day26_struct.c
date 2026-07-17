#include <stdio.h>

struct Student{
    char name[20];
    int rollno;
    float marks;
};

int main(){
    struct Student s1;

    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter roll number: ");
    scanf("%d", &s1.rollno);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s1.name);
    printf("Roll No: %d\n", s1.rollno);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
    
}
