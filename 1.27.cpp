#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main ()
{
	int raio;
		
	cout << "Informe o valor do raio da circunferência : ";
	cin  >> raio;
	cout << "\n O valor da circunferência eh " << 2 * 3.14159 * raio << "\n";
	cout << "O valor da área da circunferência eh " << 3.14159 * raio * raio << "\n";
	cout << "O valor do diâmetro da circunferência eh " << 2 * raio << "\n";
	
	return 0;
}
