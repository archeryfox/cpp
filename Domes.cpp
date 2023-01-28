// Domes.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//#define
#include <iostream>
#include <string>
#include <fstream>
#include <typeinfo>
#include<array>
#include <windows.h>  
#include "Man.h"
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

//Сложение
//Вычитание
//Умножение
//Деление
//Остаток от деления
//---------------------------------------------------------------------- - 4(Выбор действия) 3(Без выбора действий)
//Фиббоначи(Задаём количество итераций.Выводи полученные числа, Сумма всех выведенных чисел)---- - 5
//
//Обязательно защита от дураков

using namespace std;


int const col = 10;

double inp() {

	double f;
	while (true)
	{
		cin >> f;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore('\n');
		}
		else
			break;
	}
	return f;
}

array<double, 2> ab() {
	printf("Введите число а = ");
	double a = inp();
	printf("Введите число b = ");
	double b = inp();
	string repeat = "";
	do {
		printf("Ваши числа %G и %G\nПовторить ввод?(y/n)\n", a, b);
		cin >> repeat;
		if (repeat == "y") {
			ab();
		}
	} while (repeat != "n");
	array<double, 2> abb = { a,b };
	return abb;
}
/// <summary>
/// Сложение
/// </summary>
/// <returns>Сумму</returns>
double summ() {
	array<double, 2> abar = ab();
	return abar[0] + abar[1];
}
double subt() {
	array<double, 2> abar = ab();
	return abar[0] - abar[1];
}

void mult() {
	array<double, 2> abar = ab();
	printf("%g", abar[0] * abar[1]);
}
void divd() {
	array<double, 2> abar = ab();
	while (abar[1] == 0) {
		cout << "Введён ноль! будет бесконечность";
		cin >> abar[1];
	}
	
	printf("%G", abar[0] / abar[1]);
}
int part() {
	array<double, 2> abar = ab();
	return ((int)abar[0] % (int)abar[1]);
}
double fibb() {
	int l;
	cout << "Введите количесвто итераций фибоначи\n";
	cin >> l;
	int a = 0;
	int b = 1;
	int temp;

	for (int n = 1; n < l; n++)
	{
		temp = b;
		b += a;
		a = temp;
	}
	return(b);
}

int main() {
	SetConsoleTextAttribute(hConsole, col);
	setlocale(LC_ALL, "Rus");
	double a;
	double b;
	int act;
	bool exit = false;
	while (!exit)
	{
		printf("Что вы хотите сделать?\n 1. Сумму\n 2. Разность\n 3. Произведение\n 4. Частное \n 5. Остаток\n 6. Фиббоначи\n 7. return to rutine\n\tВвод: ");
		do
		{
			act = inp();
		} while (act < 0 && act>6);
		switch (act)
		{
		case 1:
			cout << summ() << '\n';
			break;
		case 2:
			cout << subt() << '\n';
			break;
		case 3:
			mult(); cout << '\n';
			break;
		case 4:
			divd();
			cout << '\n';
			break;
		case 5:
			cout << part() << '\n';
			break;
		case 6:
			cout << fibb() << '\n';
			break;
		case 7:
			exit = true;
			break;
		default:
			break;
		}
	}
	printf("бб мама я в кэш!");
	return 0;
}

