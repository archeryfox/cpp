

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	int op;
	double count, count2, res;
	cout << "Введите номер операции из перечесленных вариантов:\n1. Сложение\n2. Вычитание\n3. Умножение\n4. Деление\n5. Остаток от деления\n6. Числа Фибоначчи\n7. Выход\n";
	cin >> op;

	while (op != 7)
	{
		try
		{
			if (op >= 1 && op <= 5)
			{
				cout << "Ведите первое число: ";
				cin >> count;
				cout << "Введите второе число: ";
				cin >> count2;
			}
			switch (op)
			{
			case 1:
				cout << "\nРезультат сложения " << count << " и " << count2 << " равен " << count + count2 << endl;
				cout << "Введите номер операции: ";
				cin >> op;
				break;
			case 2:
				cout << "\nРезультат вычитания " << count << " и " << count2 << " равен " << count - count2 << endl;
				cout << "Введите номер операции: ";
				cin >> op;
				break;
			case 3:
				cout << "\nРезультат умножения " << count << " и " << count2 << " равен " << count * count2 << endl;
				cout << "Введите номер операции: ";
				cin >> op;
				break;
			case 4:
				try
				{
					res = count / count2;
					cout << "Результат деления " << count << " и " << count2 << " равен " << res << endl;
				}
				catch (int DivideByZeroException)
				{
					cout << "Произошло деление на 0\nВведите корректные параметры!";
				}
				cout << "Введите номер операции: ";
				cin >> op;
				break;
			case 5:
				try {
					res = (int)count % (int)count2;
					cout << "\nОстаток от деления " << count << " и " << count2 << " равен " << res << endl;
				}
				catch (int DivisionByZeroException) {
					cout << "Введены некоректные показатели\nПовторите попытку!";
				}
				cout << "Введите номер операции: ";
				cin >> op;
				break;
			case 6:
				int num, Fnum = 0, Snum = 1, sum = 0;
				long int fib;
				cout << "Введите количество рядов: ";
				cin >> num;
				for (int i = 0; i <= num; i++)
				{
					res = Fnum + Snum;
					cout << Fnum << " ";
					Fnum = Snum;
					Snum = res;
					sum += Fnum;
				}
				printf("\nСумма итераций равна %i\n", sum);
				cout << "Введите номер операции: ";
				cin >> op;
				break;
			default:
				cout << "Некорректная операция\nПовторите попытку: ";
				cin >> op;
				break;
			};
		}
		catch (...)
		{
			cout << "Введены некоректные значения переменных\nПовторите попытку!";
		}continue;
	};
	cout << "Поздравляем!\nВы прошли калькулятор!";
}
