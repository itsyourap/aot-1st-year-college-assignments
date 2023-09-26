/*
Assignment 2:-

In the quiet village of Numerica, there lived two numbers named Max and Min, who were inseparable
friends. One sunny day, they embarked on an adventure to discover their true potentials.

As they journeyed, they stumbled upon a contest: "Find the Maximum and Minimum!" In this
challenge, Max and Min had to compare their values and determine who was the greatest and who was
the humblest.

Max, always aspiring for greatness, proudly claimed the title of the maximum number, while Min,
the embodiment of humility, gracefully accepted the role of the minimum. Their mutual respect for each
other shone bright as they embraced their roles in this mathematical quest.

The village cheered for Max and Min, celebrating the harmony in their friendship, and learning that
even in the world of numbers, balance and friendship were values to cherish.

You have to find the maximum and minimum between two numbers to make understand your
programmer neighbour by writing a program using C language.

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
    int a = 43;
    int b = 69;

    // Printing the values of a and b
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Calculating maximum and minimum
    int Max = ((a + b) + abs(a - b))/2;
    int Min = ((a + b) - abs(a - b))/2;

    // Other ways to calculate maximum and minimum

    // Using Relational Operators
    // int Max = (a > b) * a + (b > a) * b;
    // int Min = (a < b) * a + (b < a) * b;

    // Using Ternary Operator
    // int Max = (a > b) ? a : b;
    // int Min = (a < b) ? a : b;

    printf("Max: %d\n", Max);
    printf("Min: %d\n", Min);

    return 0;
}
