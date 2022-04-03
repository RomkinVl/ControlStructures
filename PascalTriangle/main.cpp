#include <iostream>
#include <cmath>
using namespace std;

int fact(int f);
int binom(int n, int m);
int triang(int n);
int tetra(int t);

void main()
{
	setlocale(LC_ALL, "");
	int n; //Количество строк
	cout << "Введите количество строк треугольника: "; cin >> n;

	for (int i = 0; i < n; i++) //Вывод треугольника по строкам
	{
		for (int space = i; space < n; space++) //Пробелы в начале строки
			cout << "   ";

		for (int num = 0; num < i; num++)
		{
			if ((num == 0) || (num == i))	//Если число первое или последнее в строке - выводим "1"
				cout << "1  ";
			
			if ((num == 1) || (num == i - 1)) //Если число второе или предпоследнее в строке - выводим номер строки
				cout << i << "  ";

			if (num == 2)						//Если чисто третье в строке - выводим треугольное число (функция triang())
				cout << triang(i) << "  ";

			if (num == 3)						//Если число четвертое в строке - выводим тетраэдрическое число (функция tetra())
				cout << tetra(num + 1) << "  ";
		}

		cout << endl;
	}

}

int fact(int f)
{
	return 0;
}

int binom(int n, int m)
{
	return 0;
}

int triang(int n)
{
	int result;
	result = (pow(n, 2) - n) / 2;
	return result;
}

int tetra(int t)
{
	int result;
	result = (pow(t, 3) + 3 * (pow(t, 2)) + 2 * t) / 6;
	return result;
}
