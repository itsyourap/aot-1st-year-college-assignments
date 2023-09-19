/*
Assignment 2:-

In a quiet village, there live a diligent young boy named Sam. His grandfather hands him an old math
book fills with fascinating problems. Among them is a riddle that piqued Sam's interest, which involve
computing the quotient and remainder.

The riddle instructs Sam to divide a stack of 50 delicious cookies equally among his 3 best friends.
After dividing cookies, if some remains, Sam can keep it for himself. Sam rolls up his sleeves and
started to work.

But as Sam didn’t know how to calculate quotient and remainder, he comes up with the decision
that whoever will help him, he will give those remaining cookies to that people.

You tell the answers to Sam. Now, he divides the cookies into three equal portions for each friend
and gives the remaining to you.

Sam's friends were overjoyed with the cookies, and they all enjoyed a delightful afternoon snack
together. The sweet taste of the cookies was made even sweeter by Sam's dedication and problemsolving willing.

Now, you have to write a program in C language to convey the message that you really know how
to calculate quotient and remainder. 

Expected Output:
Quotient: 16
Remainder: 2

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
    // Declaring variables (total number of cookies and number of best friends)
    int totalCookies = 50;
    int bestFriends = 3;

    // Calculating quotient and remainder
    int quotient = totalCookies / bestFriends;
    int remainder = totalCookies % bestFriends;

    // Printing the results as per output format
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}
