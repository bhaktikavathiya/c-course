#include <stdio.h>

struct Address {
    char city[20];
    int pincode;
};

struct Student {
    char name[20];
    int rollno;
    struct Address addr;
};

int main(){
    struct Student s1;
    
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter roll no: ");
    scanf("%d", &s1.rollno);
    printf("Enter city: ");
    scanf("%s", s1.addr.city);
    printf("Enter pincode: ");
    scanf("%d", &s1.addr.pincode);

    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s1.name);
    printf("Roll No: %d\n", s1.rollno);
    printf("City: %s\n",s1.addr.city);
    printf("Pincode: %d\n", s1.addr.pincode);

    return 0;
}