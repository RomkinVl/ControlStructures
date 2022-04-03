#include<iostream>
using namespace std;

//#define MULTIPLICATIONAL_TABLE


void main()
{
	setlocale(LC_ALL, "");

#ifdef MULTIPLICATIONAL_TABLE
	int n = 10;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << i << "\t" << j << endl;
		}
	}

#endif // MULTIPLICATIONAL_TABLE

	int n;
	

	cout << "¬ведите число: "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		bool simple = true;

		for (int j = 2; j < i; j++)
		{
			if (i % j == 0) simple = false;
		}
		if(simple) cout << i << "\t";
	}

	cout << endl;
	
}