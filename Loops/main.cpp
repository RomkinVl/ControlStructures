#include<iostream>
#include<conio.h> //_getch();
using namespace std;

//#define WHILE
//#define DO_WHILE
#define MY_WORK

void main()
{
	setlocale(LC_ALL, "");

#if defined WHILE
	int n; //кол-во итераций
	int i = 0; //счетчик цикла
	cout << "¬ведите количество итераций: "; cin >> n;

	while (i < n)
	{
		cout << i << " Hello" << endl;
		i++;
	}
#endif

#if defined DO_WHILE
	char key; //’ранить код клавиши
	do {
		key = _getch(); //ќжидает нажатие клавиши, и возвращает ASCII-код нажатой клавишт
		cout << (int)key << "\t" << key << endl;
		//(int)key - явное преобразование типов char в int
		
	} while ((int)key != 27);
#endif

#ifdef MY_WORK

	cout << _putch(36);

#endif
}