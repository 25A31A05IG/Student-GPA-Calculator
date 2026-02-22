// C program to calculate student GPA
#include <stdio.h>

int main() 
{
    int n, i;
    float credits[20], marks[20];
    float gradePoint, totalCredits = 0, totalPoints = 0, gpa;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nSubject %d\n", i + 1);

        printf("Enter marks: ");
        scanf("%f", &marks[i]);

        printf("Enter credit hours: ");
        scanf("%f", &credits[i]);

        // Grade Point Calculation (Engineering scale)
        if(marks[i] >= 90)
            gradePoint = 10;
        else if(marks[i] >= 80)
            gradePoint = 9;
        else if(marks[i] >= 70)
            gradePoint = 8;
        else if(marks[i] >= 60)
            gradePoint = 7;
        else if(marks[i] >= 50)
            gradePoint = 6;
        else if(marks[i] >= 40)
            gradePoint = 5;
        else
            gradePoint = 0;

        totalCredits += credits[i];
        totalPoints += gradePoint * credits[i];
    }

    gpa = totalPoints / totalCredits;

    printf("\nTotal Credits: %.2f", totalCredits);
    printf("\nFinal GPA: %.2f\n", gpa);

    return 0;
}
