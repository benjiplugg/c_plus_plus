#include <iostream>
#include <fstream>
#include <Windows.h>
#include <direct.h>
#include <string>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Введите тип действия (1 - Вписать, 2 - Вывести содержимое файла в консоль): " << "\n";
	
	int action;
	cin >> action;

	ifstream o_file("B:\\test_file.txt");
	ofstream file;
	string text;
	switch (action)
	{
		case (1):
			file.open("B:\\test_file.txt");

			cout << "Введите текст: " << "\n";
			cin.ignore();
			do {
				getline(cin, text);
			} while (!text.empty());

			file << text;

			file.close();

			break;
		case (2):
			while (!o_file.eof())
			{
				getline(o_file, text);
				cout << text << endl;
			}

			break;
		default:
			cout << "Такого действия нет.";

			break;
	};

	return 0;
}