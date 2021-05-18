//This program takes two numbers from the user and then shows all the prime numbers in between that numbers.

#include <iostream>
#include "MyLib.h"
#include <Windows.h>

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;

	while (true)
	{
	cout << "Hello, this is the Prime Number Generator v 1.0. \n \n";
	typedef unsigned int UI;
	UI a = 0; UI b = 0;
		
	cout << "Enter the first number: ";
	TakeData(&a);
		
	cout << "Enter the second number: ";
	TakeData(&b);

	cout << endl;
		
	ShowPrime(&a, &b);
	cout << endl << endl;
	system("pause");
	system("cls");
	}
	return 0;
}
