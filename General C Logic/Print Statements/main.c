#include <stdio.h>
#include <stdlib.h>

int main()
{
    /// Technical Print syntax
    // Standard Basic Print Statement
    printf("Hello world!");

    // Standard Basic Print Statement with blank line "\n\n"
    printf("\n\n");

    // Print Statement with newline character "\n"
    printf("Hello world! \n");


    // Print Statement with an escape sequence "\t" adds tab
    printf("Hello \t world! \n");

    // Print Statement with an backspace sequence "\b" deletes previous character
    printf("Hello \b world! \n");

    // Print Statement with added " symbol via \"
    printf("Hello \" world! \n");

    // Print Statement with added \ symbol
    printf("Hello \\ world! \n");

    // Print Statement with added % symbol via %%
    printf("Hello %% world! \n");

    /// Format Specifiers

    int integerNumber = 9;
    unsigned int unsignedIntegerNumber = 9;
    float floatNumber = 9.000001;
    double doubleNumber = 9.000000000000001;
    char stringOfLetters[] = "Hello!";
    char character = 'a';

    // Format Specifier for Signed Integers "%d" or "%i"
    printf("This represents an integer: %d \n", integerNumber);

    // Format Specifier for Unsigned Integers "%u"
    printf("This represents an unsigned integer: %u \n", unsignedIntegerNumber);

    // Format Specifier for Floats "%f"
    printf("This represents a float: %f \n", floatNumber);

    // Format Specifier for Doubles "%lf"
    printf("This represents a double: %lf \n", doubleNumber);

    // Format Specifier for Strings "%s"
    printf("This represents a string: %s \n", stringOfLetters);

    // Format Specifier for Characters "%c"
    printf("This represents a Character: %c \n", character);

    /// Formatting Modifiers

    // Modifying Width Right-Sided
    printf("Modifying Width right-sided: %5d \n", integerNumber);

    // Modifying Width Left-Sided
    printf("Modifying Width left-sided: %-5d \n", integerNumber);

    // Adding Padding i.e. zeros to the left of the character
    printf("Padding with zeros to the left side: %05d \n", integerNumber);

    // Modifying Precision i.e. number of decimal places
    printf("Number of decimal places: %.2f \n", floatNumber);



    return 0;
}
