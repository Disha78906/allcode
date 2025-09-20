#include <stdio.h>

// A global variable (can be used anywhere in this file)
int globalVar = 10;

// Function to just show the global variable
void showGlobal() {
    printf("In showGlobal, globalVar = %d\n", globalVar);
}

// Function to change the global variable
void changeGlobal() {
    globalVar = globalVar + 5; // increasing value by 5
    printf("In changeGlobal, globalVar = %d\n", globalVar);
}

int main() {
    printf("At start, globalVar = %d\n", globalVar);

    showGlobal();    // using global variable
    changeGlobal();  // changing global variable
    showGlobal();    // checking the updated value

    return 0;
}
