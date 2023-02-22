#include <iostream>

int main()
{
    int number1, number2;
    
    std::cout << "Digite o primeiro numero = \n";
    std::cin  >> number1;
    std::cout << "Digite o segundo numero = \n";
    std::cin  >> number2;
    
    std::cout << "A soma dos dois numeros digitados eh = " << number1 + number2 << "\n";
    std::cout << "O produto dos dois numeros digitados eh = " << number1 * number2 << "\n";
    std::cout << "A diferença dos dois numeros digitados eh = " << number1 - number2 << "\n";
    std::cout << "A O quociente dos dois numeros digitados eh = " << number1 / number2 << "\n";
    
    //return 0;
}
