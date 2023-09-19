/*
Assignment 1:-

Once upon a time, in a quiet village nestled by the countryside, lived a curious young girl named Emily.
One sunny afternoon, Emily decided to explore the fields surrounding her home. As she wandered through the
lush green meadows, she stumbled upon an old, forgotten book beneath a gnarled oak tree.

The book contained a mysterious riddle that intrigued Emily. It described a hidden treasure buried
in the meadow, protected by a magical rectangle. To uncover the treasure, she needed to calculate the
perimeter and area of the enchanted rectangle.

Emily rushed back home and quickly gathered her tools. She measured the rectangle's length, finding it to
be 7 inches, and its width, which was 5 inches. With these values in hand, she needed to calculate perimeter
and area of that rectangle.

Armed with these newfound values, Emily returned to the meadow. At the precise spot described in the riddle,
she dug, and to her astonishment, she uncovered a chest filled with sparkling jewels and ancient coins.

Now, you have to write a program using C language to calculate and print that required values to
understand the location of that treasure.

Expected Output:
Perimeter of the rectangle = 24 inches
Area of the rectangle = 35 square inches

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
    // Declaring variables (length and width of the rectangle)
    int length = 7;
    int width = 5;

    // Calculating perimeter and area of the rectangle
    int perimeter = 2 * (length + width);
    int area = length * width;

    // Printing the results as per output format
    printf("Perimeter of the rectangle = %d inches", perimeter);
    printf("Area of the rectangle = %d square inches", area);

    return 0;
}
