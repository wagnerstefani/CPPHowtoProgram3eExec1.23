#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main ()
{
	int raio;
		
	cout << "Informe o valor do raio da circunfer�ncia : ";
	cin  >> raio;
	cout << "\n O valor da circunfer�ncia eh " << 2 * 3.14159 * raio << "\n";
	cout << "O valor da �rea da circunfer�ncia eh " << 3.14159 * raio * raio << "\n";
	cout << "O valor do di�metro da circunfer�ncia eh " << 2 * raio << "\n";
	
	return 0;
}
