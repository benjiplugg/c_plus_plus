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
	print("Введите номер практической: ");
	cin >> ex_num;

	try {
		switch (ex_num) {
			case 1:
				exercise_1();
				break;
			default:
				print("Практическая, которую вы искали не найдена!");
				break;
		}
	}
	catch (...) {
		print("Введено не целое число!");
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
		print("Введите скорость первого автомобиля: ");
		cin >> v1;

		if (!cin) {
			throw 0;
		}

		print("Введите скорость второго автомобиля: ");
		cin >> v2;

		if (!cin) {
			throw 0;
		}

		print("Введите дистанцию между автомобилями: ");
		cin >> distance;

		if (!cin) {
			throw 0;
		}

		print("Введите время: ");
		cin >> time;

		if (!cin) {
			throw 0;
		}

		cout << "Расстояние между ними через T-часов будет равно: " << fabs(distance - (v1 + v2) * time) << endl;
	}
	catch (...) {
		print("Введено не целое число!");
	}
}