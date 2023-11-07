

#include <iostream>


using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int num1, num2, answer;
	cout << "Введите первое число: ";
	cin >> num1;
	cout << "Введите второе число: ";
	cin >> num2;

	cout << "Сколько будет " << num1 << " умножить на " << num2 << "? ";
	cin >> answer;

	int result = num1 * num2;
	if (answer == result) {
		cout << "Правильно!" << endl;
	}
	else {
		cout << "Неправильно. Правильный ответ: " << result << endl;
	}

	return 0;
}