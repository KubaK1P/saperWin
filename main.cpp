#include <iostream>
#include <windows.h>
#include "Saper.hpp"
#include "Saper.cpp"


int main(int argc, char const *argv[])
{
    std::cout << "Hello, saper!" << "\n";

    int height, width;

    std::cout << "Wysokosc planszy: " << "\n";
    std::cin >> height;
    std::cout << "Szerokosc planszy: " << "\n";
    std::cin >> width;    
    
    Saper game(height, width, 0.3);

    game.printArray();
    return 0;
}
