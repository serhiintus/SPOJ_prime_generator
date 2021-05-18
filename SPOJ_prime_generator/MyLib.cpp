#include <math.h>
#include <iostream>

using std::cin;
using std::cout;

typedef unsigned int UI;

//This function takes data and protects program from entering incorrect data.
void TakeData(UI* x)
{
	while (!(cin >> *x))
	{
		cin.clear();
		while (cin.get() != '\n')
			continue;
		cout << "Wrong data. Try again: ";
	}
}

//This function checks the numbers. If the number is prime, the function returns TRUE, otherwise FALSE.
bool ChekPrimeNum(UI** fa)
{
	bool result = true;
	if (**fa == 0 || **fa == 1)
		result = false;
	else if (**fa == 2 || **fa == 3)
		return result;
	else
	{
		UI i = sqrt(**fa);
		while (i > 1)
		{
			UI x = **fa % i;
			if (x == 0)
			{
				result = false;
				break;
			}
			else
				i--;
		}
	}
	return result;
}

//This function shows the prime numbers. 
void ShowPrime(UI* fa, UI* fb)
{
	if (*fa < *fb)
	{
		int n = 0;
		while (*fa <= *fb)
		{
			if (ChekPrimeNum(&fa))
			{
				cout << *fa << " ";
				n++;
			}
			(*fa)++;
		}
		if(n==0)
			cout << "There are no prime numbers";
	}
	else if(*fa > *fb)
	{
		int n = 0;
		while (*fb <= *fa)
		{
			if (ChekPrimeNum(&fb)) 
			{
				cout << *fb << " ";
				n++;
			}
			(*fb)++;
		}
		if (n == 0)
			cout << "There are no prime numbers";
	}
	else
	{
		if (ChekPrimeNum(&fa))
			cout << *fa;
		else
			cout << "There are no prime numbers";
	}
}
