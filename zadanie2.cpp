

#include <iostream>


using namespace std;

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	int day;

	cout << "Введите день недели (1 для Понедельника, 2 для Вторника и т.д.): ";
	cin >> day;

	switch (day) {
	case 1:
		cout << "Понедельник: Английский Язык, ОС и среды" << endl;
		break;
	case 2:
		cout << "Вторник: Системное программирование, ИСПО" << endl;
		break;
	case 3:
		cout << "Среда: Компьетерные сети, Базы данных" << endl;
		break;
	case 4:
		cout << "Четверг: Системное программирование, Английский язык" << endl;
		break;
	case 5:
		cout << "Пятница: ТРПО, ОС и среды" << endl;


	default:
		cout << "Некорректный ввод дня недели." << endl;
		break;
	}

	return 0;
}