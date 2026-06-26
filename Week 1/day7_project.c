#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 90)
    {
    printf("Grade A.Excellent!");
}

else if (marks >= 75)
    {
        printf("Grade B.Good Job!");
    }

else if (marks >= 60)
    {
        printf("Grade C.Average.");
    }

else if (marks >= 40)
{
    printf("Grade D.Need Improvement.");
}

else {
    printf("Failed. Please work hard");
}

return 0;

}