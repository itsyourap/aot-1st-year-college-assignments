/*
Assignment 4:-

Write a program to find sum of a 3 digit number [Without using loop]
[Use only Arithmetic Operator and Assignment operator]

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
    int n, sum, onesDigit, tensDigit, hundredsDigit;

    // Taking input from user
    printf("Enter a 3 digit number: ");
    scanf("%d", &n);

    // Calculating sum of the digits
    onesDigit = n % 10;
    tensDigit = (n / 10) % 10;
    hundredsDigit = (n / 100) % 10;
    sum = onesDigit + tensDigit + hundredsDigit;

    // Printing the sum of the digits
    printf("The sum of the digits is: %d\n", sum);
    
    return 0;
}
