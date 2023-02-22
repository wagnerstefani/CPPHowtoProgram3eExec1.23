#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int number;
	
	cout << "Enter a five-digit number: " << "\n";
	cin  >> number;
	cout << "01 - The value of variable number is " << number << "\n";
	cout << number / 10000 << "   ";
	
	number = number % 10000;
	cout << "02 - The value of variable number is " << number << "\n";	
	cout << number / 1000 << "   ";
	
	number = number % 1000;
	cout << "03 - The value of variable number is " << number << "\n";	
	cout << number / 100 << "   ";
	
	number = number % 100;
	cout << "04 - The value of variable number is " << number << "\n";
	cout << number / 10 << "   ";
	
	number = number % 10;
	cout << "04 - The value of variable number is " << number << "\n";

return 0;	
}
