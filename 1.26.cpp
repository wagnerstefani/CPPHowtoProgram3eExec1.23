#include <iostream>

int main ()
{
    int integer1, integer2, integer3;
    
    std::cout << "Digite três inteiros \n";
    std::cin  >> integer1 >> integer2 >> integer3;
    
    std::cout << "A soma eh " << integer1 + integer2 + integer3 << "\n";
    std::cout << "A media eh " << (integer1 + integer2 + integer3) / 3 << "\n";
    std::cout << "O produto eh " << integer1 * integer2 * integer3 << "\n";
    
    if (integer1 < integer2)
        if (integer1 < integer3)
            std::cout << "O menor eh " << integer1 << "\n";
            
    if (integer2 < integer1)
        if (integer2 < integer3)
            std::cout << "O menor eh " << integer2 << "\n";
            
    if (integer3 < integer1)
        if (integer3 < integer2)
            std::cout << "O menor eh " << integer3 << "\n";


            
    if (integer1 > integer2)
        if (integer1 > integer3)
            std::cout << "O maior eh " << integer1 << "\n";
            
    if (integer2 > integer1)
        if (integer2 > integer3)
            std::cout << "O maior eh " << integer2 << "\n";
            
    if (integer3 > integer1)
        if (integer3 > integer2)
            std::cout << "O maior eh " << integer3 << "\n";
            
    int pause;
    std::cin >> pause;
    
    return 0;    
}
