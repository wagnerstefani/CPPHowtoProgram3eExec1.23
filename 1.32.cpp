#include <iostream>

using std::cout;
using std::cin;

int main ()
{
	int integer1;
	int integer2;
	
	cout << "Digite o primeiro numero inteiro \n";
	cin  >> integer1;
	
	cout << "Digite o segundo numero inteiro \n";
	cin  >> integer2;
	
	if (integer1 % integer2 == 0)
		cout << integer1 << " eh um numero multiplo de " << integer2;
		
	if (integer1 % integer2 != 0)
		cout << integer1 << " nao eh um numero multiplo de " << integer2;
		
	return 0;
}
