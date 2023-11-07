

#include <iostream>
#include <string>

using namespace std;

bool validatePassword(const std::string& password) {
	bool hasUppercase = false;
	bool hasLowercase = false;
	bool hasSpecialCharacter = false;

	for (char c : password) {
		if (isupper(c)) {
			hasUppercase = true;
		}
		else if (islower(c)) {
			hasLowercase = true;
		}
		else if (c == '!' || c == '@' || c == '#' || c == '$' || c == '%' || c == '&' ||
			c == '*' || c == '+' || c == '?') {
			hasSpecialCharacter = true;
		}
	}

	return hasUppercase && hasLowercase && hasSpecialCharacter;
}

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	string password;
	cout << "Введите пароль: ";
	cin >> password;

	if (validatePassword(password)) {
		cout << "Пароль верный." << endl;
	}
	else {
		cout << "Пароль неверный." << endl;
	}

	return 0;
}


