#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;
void print(string word);
void exercise_1();

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int ex_num;
	print("������� ����� ������������: ");
	cin >> ex_num;

	try {
		switch (ex_num) {
			case 1:
				exercise_1();
				break;
			default:
				print("������������, ������� �� ������ �� �������!");
				break;
		}
	}
	catch (...) {
		print("������� �� ����� �����!");
	}

	return 0;
}

void print(string word) {
	cout << word << endl;
}

void exercise_1() {
	int v1, v2;
	float distance, time;

	try {
		print("������� �������� ������� ����������: ");
		cin >> v1;

		if (!cin) {
			throw 0;
		}

		print("������� �������� ������� ����������: ");
		cin >> v2;

		if (!cin) {
			throw 0;
		}

		print("������� ��������� ����� ������������: ");
		cin >> distance;

		if (!cin) {
			throw 0;
		}

		print("������� �����: ");
		cin >> time;

		if (!cin) {
			throw 0;
		}

		cout << "���������� ����� ���� ����� T-����� ����� �����: " << fabs(distance - (v1 + v2) * time) << endl;
	}
	catch (...) {
		print("������� �� ����� �����!");
	}
}