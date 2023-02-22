#include <iostream>

int main()
{
    int integer1, integer2;
    
    std::cout << "Insira o primeiro numero inteiro = \n"; 
    std::cin  >> integer1;
    std::cout << "Insira o segundo numero inteiro = \n";
    std::cin  >> integer2;

    if (integer1 == integer2){
       std::cout << "Estes nunmeros sao iguais. \n";
       }
       
    if (integer1 > integer2){
       std::cout << integer1 << " eh maior que " << integer2 << "\n";
       std::cout << integer1 << " eh o maior \n";
       }
       
    if (integer1 < integer2){
       std::cout << integer1 << " eh menor que " << integer2 << "\n";       
       std::cout << integer2 << " eh o maior \n";
       }
       
       int pause;
       std::cin >> pause;
       
       return 0;      
}
