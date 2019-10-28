// ConsoleCalc.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <math.h>
#include <stdio.h>

int Add(int x, int y) { return x + y; }
int Subtract(int x, int y) { return x - y; }
int Multiply(int x, int y) { return x * y; }
int Divide(int x, int y) { return x / y; }
int Mod(int x, int y) { return x % y; }
double Square(double x, double y) { return pow(x, y); }

int main()
{
	setlocale(LC_ALL, "Russian");
	int x = 0, y = 0, result;
	char z = '0';

	while (true) {
		printf("Возможные операции с ДВУМЯ числами:\n \"+\", \"-\", \"*\", \"/\", \"MOD\", \"^\".\n");
		printf("Введите 0, если хотите выйти.\n");
		scanf("%d %c %d", &x, &z, &y);
		if (x == 0 | y == 0 | z == '0')
			return 0;

		switch (z)
		{
		case '+': result = Add(x, y); std::cout << "Результат: " << result << "\n"; break;
		case '-': result = Subtract(x, y); std::cout << "Результат: " << result << "\n"; break;
		case '*': result = Multiply(x, y); std::cout << "Результат: " << result << "\n"; break;
		case '/': result = Divide(x, y); std::cout << "Результат: " << result << "\n"; break;
		case '%': result = Mod(x, y); std::cout << "Результат: " << result << "\n"; break;
		case '^': result = Square(x, y); std::cout << "Результат: " << result << "\n"; break;
		default:
			printf("Неизвестная операция!\n");
			continue;
		}
	}
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
