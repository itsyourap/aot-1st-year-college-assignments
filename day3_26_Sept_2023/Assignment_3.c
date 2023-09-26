/*
Assignment 3:-

In the enchanting land of Arithmetica, there lived two numbers, Addie and Pluso. They were known
for their unique abilities to perform mathematical wonders. One day, a curious challenge arrived in the
form of a riddle: "Calculate the sum of two numbers without using the '+' operator."

Determined to solve this enigma, Addie and Pluso embarked on an extraordinary journey. With their 
combined efforts, they unveiled the hidden solution, proving that in Arithmetica, even the most 
complex problems could be conquered with creativity and collaboration. Their legend lived on,
inspiring all who dared to explore the wonders of mathematics.

If you have got the idea, write the program to do the same using C language.

*/

/*
 * Name: Ankan Pal
 * Stream: CSE
 * Semester: 1
 * Section: 1
 * Roll: 21
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaring variables
    int Addie = 43;
    int Pluso = 69;

    // Printing the values of Addie and Pluso
    printf("Addie = %d\n", Addie);
    printf("Pluso = %d\n", Pluso);

    // Calculating sum of Addie and Pluso without using '+' operator
    int sum = Addie - (-Pluso);

    // Printing the sum of Addie and Pluso
    printf("Sum of Addie and Pluso = %d\n", sum);

    return 0;
}
