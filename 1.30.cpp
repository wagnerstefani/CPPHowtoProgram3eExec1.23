#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int integer1;
	int integer2;
	int integer3;
	int integer4;
	int integer5;
	
	cout << "Insira o primeiro numero inteiro \n";
	cin  >> integer1;
	
	cout << "Insira o segundo numero inteiro \n";
	cin  >> integer2;
	
	cout << "Insira o terceiro numero inteiro \n";
	cin  >> integer3;
	
	cout << "Insira o quarto numero inteiro \n";
	cin  >> integer4;
	
	cout << "Insira o quinto numero inteiro \n";
	cin  >> integer5;
	
	if (integer1 > integer2)
		if (integer1 > integer3)
			if(integer1 > integer4)
				if(integer1 > integer5)
				cout << "O primeiro numero e o maior \n";
				
	if (integer2 > integer1)
		if (integer2 > integer3)
			if(integer2 > integer4)
				if(integer2 > integer5)
				cout << "O segundo numero e o maior \n";
				
	if (integer3 > integer1)
		if (integer3 > integer2)
			if(integer3 > integer4)
				if(integer3 > integer5)
				cout << "O terceiro numero e o maior \n";
				
	if (integer4 > integer1)
		if (integer4 > integer2)
			if(integer4 > integer3)
				if(integer4 > integer5)
				cout << "O quarto numero e o maior \n";
				
	if (integer5 > integer1)
		if (integer5 > integer2)
			if(integer5 > integer3)
				if(integer5 > integer4)
				cout << "O quinto numero e o maior \n";
				
	return 0;
}
