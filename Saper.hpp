#pragma once
#include <iostream>
#include <cstdlib>  // For srand and rand
#include <ctime>  

class Saper {
private:
    int** board;  // Pointer to a pointer (2D board)
    int rows, cols;
    double mines;
public:
    // Constructor to initialize the 2D board with given rows and columns
    Saper(int rows, int cols, double mines);

    // Destructor to free the allocated memory
    ~Saper();

    // Function to set a value at a specific position
    void setValue(int r, int c, int value);

    // Function to print the board
    void printArray();
};

