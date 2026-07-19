#include <stdio.h>

struct Student {
    char name[20];
    int rollno;
    float marks;
};

void printStudent (struct Student s){
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.rollno);
    printf("Marks: %.2f\n", s.marks);
}

struct Student getStudent(){
    struct Student s;
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.rollno);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    return s;
}

int main(){
    struct Student s1;
    s1 = getStudent();
    printf("\n--- Student Details ---\n");
    printStudent(s1);

    if(s1.marks >= 40){
    printf("Result: Pass\n");
    } else {
    printf("Result: Fail\n"); 
    }
    return 0;
}