#include <stdio.h>
#include <stdlib.h>

int main()
{
    /// Instance Variables
    int x = 0, y = 0, z = 0, number = 0;
    char str[50];

    /// Simple Scan Statements
    // Using the appropriate format specifier
    // Storing in the "number" variable's address
    printf("Please enter an integer: ");
    scanf("%d", &number);
    printf("You entered the number: %d\n", number);

    /// More than one input
    printf("Enter values for x, y, and z: \n");
    scanf("%d %d %d", &x, &y, &z);
    printf("x = %d, y = %d, z = %d\n", x, y, z);

    /// Scanning Strings
    // A string in an array of characters
    // An array acts like a point -> No need to use "&"
    // Adding the number 10 in the format specifier limits how many characters are allowed to be stored
    printf("Enter your name: ");
    scanf("%10s", str);
    printf("Hi %s\n", str);

    return 0;
}
