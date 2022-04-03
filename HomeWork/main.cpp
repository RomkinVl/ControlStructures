#include<iostream>
using namespace std;

#define PALINDROME

void main() {
	setlocale(LC_ALL, "");

#ifdef PALINDROME

	int number; //Число, вводимое с клавиатуры
	int reverse = 0; // Обратная запись введенного числа
	cout << "Введите число: "; cin >> number;
	int buffer = number;
	while (buffer > 0) {
		reverse *= 10; //Освобождаем место под младший разряд
		reverse += buffer % 10; //Получаем младший разряд числа, и сохраняем его
		buffer /= 10; //Убираем сохраненный разряд
	}
	cout << number << endl;
	cout << reverse << endl;

#endif

}