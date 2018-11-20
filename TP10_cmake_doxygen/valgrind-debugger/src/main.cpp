#include <iostream>
#include <cstdlib>
#include <string>


void plop_ok(const int number)
{
    int *tab = new int[number];

    tab[number/2] = 42;

    delete[] tab;
}


void plop_not_ok(const int number)
{
    int *tab = new int[number];

    tab[number/2] = 42;
}


void plop_seg_fault()
{
    int *tab = 0;

    std::cout << "plop" << tab[100000000] << std::endl;
}


int main(int argc, char** argv) {

    if(argc != 2){
        std::cout << "usage: " << argv[0] << " number" << std::endl;
        return EXIT_FAILURE;
    }

    const int myNumber = std::stoi(argv[1]);
    std::cout << "number : " << myNumber << std::endl;

    plop_ok(myNumber);

    plop_not_ok(myNumber);

    // plop_seg_fault();

    return EXIT_SUCCESS;
}

// valgrind: compile with -g
// > valgrind --leak-check=yes ./plop 10
// if not compiled with -g, will not tell the line of the memory leak

// debugger: compile with -g
// > gdb ./plop                 // prepare the debugger
// > r 10                       // or run 10 -execute the program and feed it arguments
// > bt                         // backtrace
// > p variableName             // print the variable
