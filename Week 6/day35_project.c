 #include <stdio.h>

int main(){
    int choice;
    printf("=== Student Record System ===\n");
    printf("1. Add Student\n");
    printf("2. View All Students\n");
    printf("3. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    printf("You chose %d\n", choice);
    return 0;
}