

#include <iostream>
#include <string>

using namespace std;

bool isPasswordValid(const string& password) {
    bool hasLowerCase = false;
    bool hasUpperCase = false;
    bool hasSpecialChar = false;

    
    for (char c : password) {
        if (islower(c)) {  
            hasLowerCase = true;
        }
        else if (isupper(c)) { 
            hasUpperCase = true;
        }
        else if (ispunct(c) || isdigit(c)) {  
            hasSpecialChar = true;
        }
    }

    return hasLowerCase && hasUpperCase && hasSpecialChar;
}

string generateRandomPassword(int length) {
    string password;
    string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%&*+?";

    srand(time(0));  

    for (int i = 0; i < length; i++) {
        int randomIndex = rand() % chars.length();  
        password += chars[randomIndex];  
    }

    return password;

}

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    int passwordLength;

    cout << "Введите длину пароля: ";
    cin >> passwordLength;

    std::string password = generateRandomPassword(passwordLength);

    cout << "Сгенерированный пароль: " << password << endl;

    if (isPasswordValid(password)) {
        cout << "Пароль действителен." << endl;
    }
    else {
        cout << "Пароль не действителен." << endl;
    }

    return 0;
}


