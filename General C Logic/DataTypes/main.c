#include <stdio.h>
#include <stdlib.h>

/// Symbolic Constants
#define PI 3.14159265358
#define E 2.718281828459

int main()
{
    /// Typed Symbolic constants: Cannot be further changed
    const int TAX_RATE = 13;



    /// Static/Global Variables: Shared across all instances
    static int sharedInt = 1;



    /// Basic Primitive Data Types

    // Integer: Stores whole numbers, without decimals
    int intNumber = 1;

    // Floats: Stores single precision floating point numbers 6–7 decimal places.
    float floatNumber = 1.99;

    // Double: Stores double precision floating point numbers 15 decimal places.
    double doubleNumber = 1.99;

    // Character: Stores a single character or ASCII value.
    char character = 'A';

    // String (Reference Data Type): Stores a sequence of characters, array of characters.
    char str[] = "Hello World";



    /// Type Modifiers

    // Signed Data: Allows storage of both positive and negative numbers.
    signed int signedIntNumber = 1;

    // Unsigned Data: Allows storage of only positive numbers, doubles the range allowed.
    unsigned int unsignedIntNumber = 1;

    // Short Data: Decreases the memory size allocated to an integer, used to optimize and save memory.
    short int shortInt = 1;

    // Long Data: Increases the memory size allocated to an integer.
    long int longInt = 1;



    /// User-Defined Data Types

    // Struct
    struct Student{
        unsigned short int age;
        float GPA;

        // Can only have one flexible array PER struct, at the bottom!
        char occupation[];
    };

    // How to call a struct
    struct Student student;

    // typedef struct
    typedef struct{
        unsigned short int age;
        char sex;

        // Can only have one flexible array PER struct, at the bottom!
        char dateOfBirth[];
    } Person;

    // How to call a typedef struct
    Person person;



    /// Union: One type can hold or be more than one type
    union Data {
        int i;
        float f;
        char str[20];
    };

    // How to call a union
    union Data data;



    /// Enumeration
    enum CAR_TYPE{
        ELECTRIC,
        DISEL,
        GAS,
        HYBRID
    };

    // How to call an enum variable
    enum CAR_TYPE type = GAS;



    /// Type-Casting

    float x = 2.999;

    // adding (desiredType) x processes x as the desired type
    printf("Float: %f, Integer: %d", x, (int) x);

    return 0;
}
