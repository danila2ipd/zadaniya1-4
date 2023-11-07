

#include <iostream>

using namespace std;


int main() {
	setlocale(LC_ALL, "RUSSIAN");

	const int SIZE = 7;
	int numbers[SIZE] = { 0, 1, 2, 3, 4, 5, 6 };
	int sum = 0;


	for (int i = 0; i < SIZE; i++) {

		if (numbers[i] % 2 != 0) {

			sum += numbers[i];
		}
	}


	cout << "Сумма нечетных чисел: " << sum << endl;

	return 0;
}
