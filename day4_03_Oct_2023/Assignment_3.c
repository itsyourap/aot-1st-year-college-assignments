/*
Assignment 3:-

Write a program to calculate sum of 5 subjects and find percentage.

*/

/*
 * Name: Ankan Pal
 * Stream: CSE
 * Semester: 1
 * Section: 1
 * Roll: 21
 */

#include <stdio.h>

int main() {
    // Declaring variables
    float s1, s2, s3, s4, s5, total, sum, percentage;

    // Taking input from user
    printf("Enter the marks of subject 1: ");
    scanf("%f", &s1);
    printf("Enter the marks of subject 2: ");
    scanf("%f", &s2);
    printf("Enter the marks of subject 3: ");
    scanf("%f", &s3);
    printf("Enter the marks of subject 4: ");
    scanf("%f", &s4);
    printf("Enter the marks of subject 5: ");
    scanf("%f", &s5);
    printf("Enter Total Marks: ");
    scanf("%f", &total);

    // Calculating sum and percentage
    sum = s1 + s2 + s3 + s4 + s5;
    percentage = (sum / total) * 100;

    // Printing the sum and percentage
    printf("The sum of the marks is: %f\n", sum);
    printf("The percentage of the marks is: %f\n", percentage);
    
    return 0;
}
