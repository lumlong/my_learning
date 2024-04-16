#include <stdio.h>
#include <stdlib.h>

// This is comment

// Variable
// type variableName = value;
int myNum = 15;
float;
double;
char;

// Constant
// This constant value can't change
const int myConstNum = 15;

// Array
int myNumbers[] = {25, 50, 75, 100};
// Size
int myDeclareNumbers[19];
size_t n = sizeof(myDeclareNumbers) / sizeof(myDeclareNumbers[0]);

// String is an array of text
char greetings[] = "Hello World!";

// Pointer
// Store memory address
int* ptr = &myNum;

// Function
void myFunction(char name[]) {
    printf("Hello %s\n", name);
}

// Struct
struct myStructure {
    int myNum;
    char myLetter;
};

// Enum
enum Level {
    LOW,
    MEDIUM,
    HIGH
};

int main() {
    // Switch
    int day = 4;
    switch (day) {
        case 1:
            printf("Monday");
            break;
        default:
            break;
    }
    printf("The size of array is %zu \n", n);

    // Pointer and memory address
    // Output the value of myNum (43)
    printf("%d\n", myNum);
    // Output the memory address of myNum (0x7ffe5367e044)
    printf("%p\n", &myNum);
    printf("%p\n", &myNumbers[0]);

    // Output the memory address of myNum with the pointer (0x7ffe5367e044)
    printf("%p\n", ptr);

    // Struct
    struct myStructure s1;
    s1.myNum = 1;
    printf("My number: %d\n", s1.myNum);

    // Enum
    enum Level myVar = MEDIUM;

    // Get input
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    printf("You entered: %s", str);

    //  Run a terminal
    int result = system("open -a Terminal");  // Opens default Terminal app
    if (result == -1) {
        printf("Error opening terminal\n");
    }

    return 0;
};