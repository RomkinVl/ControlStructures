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
	int n; //���-�� ��������
	int i = 0; //������� �����
	cout << "������� ���������� ��������: "; cin >> n;

	while (i < n)
	{
		cout << i << " Hello" << endl;
		i++;
	}
#endif

#if defined DO_WHILE
	char key; //������� ��� �������
	do {
		key = _getch(); //������� ������� �������, � ���������� ASCII-��� ������� �������
		cout << (int)key << "\t" << key << endl;
		//(int)key - ����� �������������� ����� char � int
		
	} while ((int)key != 27);
#endif

#ifdef MY_WORK

	cout << _putch(36);

#endif
}