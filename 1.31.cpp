#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int number;
	
	cout << "insira um numero inteiro \n";
	cin  >> number;
	
	if (number % 2 == 0)
		cout << "O numero " << number << " e par. \n";
		
	if (number % 2 != 0)
		cout << "O numero " << number << " e impar. \n";
	
	return 0;
}
