#include <iostream>

int main() {

    // asterisk syntax creates a pointer variable, which can hold a memory address
    int * pointervariable;

    // new is used to create a variable on the heap. This line
    // assigns an addresss to pointervariable and reserves enough space
    // told hold an integer.
    pointervariable = new int;

    // Pointer variable holds an addresss. The address allows placing a value in
    // memory at the address.
    *pointervariable = 10;

    std::cout << "pointer value:  " << *pointervariable << "\n";
    std::cout << "pointer address: " << pointervariable << "\n";

    // remove pointervariable from the heap
    delete pointervariable;
    pointervariable = NULL;

    return 0;
}
