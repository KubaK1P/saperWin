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
    Saper(int rows, int cols, double mines) : rows(rows), cols(cols), mines(mines) {
        // Allocate memory for rows
        board = new int*[rows];
        
        // Allocate memory for each row
        for (int i = 0; i < rows; i++) {
            board[i] = new int[cols];
        }
        
        srand(time(0));
        
        // Spread the mines
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if ((((double)rand()) / RAND_MAX) < mines) {
                    board[i][j] = -1;
                } else {
                    board[i][j] = 0;
                }
                
            }
        }
        // calculate empty cell numbers
        int neighbours;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                neighbours = 0; 
                if(board[i][j] == 0) {
                    for (int k = -1; k < 2; k++) {
                        for (int l = -1; l < 2; l++) {
                            if (k == 0 && l == 0) {
                                continue;
                            } else {
                                int newRow = i + k;
                                int newCol = j + l;
                                
                                if (newRow >= 0 && newRow < rows && newCol >= 0 && newCol < cols) {
                                    if (board[newRow][newCol] == -1) {
                                        neighbours++;
                                    }
                                }
                            }
                        }
                    }
                    board[i][j] = neighbours;

                } else {
                    continue;
                }
            }
        }
    }

    // Destructor to free the allocated memory
    ~Saper() {
        for (int i = 0; i < rows; i++) {
            delete[] board[i];
        }
        delete[] board;
    }

    // Function to set a value at a specific position
    void setValue(int r, int c, int value) {
        if (r < rows && c < cols)
            board[r][c] = value;
    }

    // Function to print the board
    void printArray() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                std::cout << board[i][j] << "\t";
            }
            std::cout << std::endl;
        }
    }
};

