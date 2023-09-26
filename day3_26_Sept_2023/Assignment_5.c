/*
Assignment 5:-

In the quaint village of Variableville, there lived two friends, Alice and Bob, each possessing unique
gifts. One day, they faced a challenge: "Swap the value of two variables using a third variable."

Undaunted, Alice and Bob embarked on a journey of collaboration. With their combined abilities,
they introduced Charlie, the third variable, into their world. Alice shared her value with Charlie,
allowing Bob's essence to inhabit her original place.

Through this dance of variables, Alice and Bob achieved the magical swap. The village marveled at
their teamwork, learning that in Variableville, even the most intricate problems could be solved through
cooperation, where every variable played a crucial role in the grand symphony of life.

Similarly, you play the same game using three variables and the target is same. Use C language to
do so.

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
    int Alice = 5;
    int Bob = 9;
    int Charlie;

    // Printing the values of Alice and Bob
    printf("Before swapping:\n");
    printf("Alice = %d\n", Alice);
    printf("Bob = %d\n\n", Bob);

    // Swapping the values of Alice and Bob using Charlie
    Charlie = Alice;
    Alice = Bob;
    Bob = Charlie;

    // Printing the values of Alice and Bob after swapping
    printf("After swapping:\n");
    printf("Alice = %d\n", Alice);
    printf("Bob = %d\n", Bob);

    return 0;
}
