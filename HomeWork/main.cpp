#include<iostream>
using namespace std;

#define PALINDROME

void main() {
	setlocale(LC_ALL, "");

#ifdef PALINDROME

	int number; //�����, �������� � ����������
	int reverse = 0; // �������� ������ ���������� �����
	cout << "������� �����: "; cin >> number;
	int buffer = number;
	while (buffer > 0) {
		reverse *= 10; //����������� ����� ��� ������� ������
		reverse += buffer % 10; //�������� ������� ������ �����, � ��������� ���
		buffer /= 10; //������� ����������� ������
	}
	cout << number << endl;
	cout << reverse << endl;

#endif

}