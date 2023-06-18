#include <stdio.h>

int main() {
    int rollNo;
    char name[100];
    float physicsMarks, mathMarks, chemistryMarks;
    float totalMarks, percentage;

    // For Reading the roll number
    printf("Enter the Roll No: ");
    scanf("%d", &rollNo);

    // For Clearing the input buffer
    while (getchar() != '\n');

    // For Reading the name
    printf("Enter the Name: ");
    fgets(name, sizeof(name), stdin);

    // For Reading the marks for each subject
    printf("Enter the Marks of Physics: ");
    scanf("%f", &physicsMarks);

    printf("Enter the Marks of Math: ");
    scanf("%f", &mathMarks);

    printf("Enter the Marks of Chemistry: ");
    scanf("%f", &chemistryMarks);

    // For Calculating total marks and percentage
    totalMarks = physicsMarks + mathMarks + chemistryMarks;
    percentage = (totalMarks / 300) * 100;

    // For Printing the summary
    printf("\nSummary:\n");
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s", name);
    printf("Physics Marks: %.2f\n", physicsMarks);
    printf("Math Marks: %.2f\n", mathMarks);
    printf("Chemistry Marks: %.2f\n", chemistryMarks);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
