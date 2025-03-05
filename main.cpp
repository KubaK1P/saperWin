#include <iostream>
#include <windows.h>
#include "Saper.hpp"


int main(int argc, char const *argv[])
{
    std::cout << "Hello, saper!" << "\n";

    int height, width;

    std::cout << "Wysokosc planszy: " << "\n";
    std::cin >> height;
    std::cout << "Szerokosc planszy: " << "\n";
    std::cin >> width;    
    
    Saper game(height, width, 0.1);

    game.printArray();
    return 0;
}
