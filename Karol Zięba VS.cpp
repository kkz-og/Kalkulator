
#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;

    cout << "Prosty kalkulator" << endl;
    cout << "Podaj operator (+, -, *, /): ";
    cin >> operation;

    cout << "Podaj dwie liczby: " << endl;
    cin >> num1 >> num2;

    switch (operation) {
    case '+':
        cout << "Wynik: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Wynik: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Wynik: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0) {
            cout << "Wynik: " << num1 / num2 << endl;
        }
        else {
            cout << "Blad: Dzielenie przez zero!" << endl;
        }
        break;
    default:
        cout << "Nieprawidlowy operator!" << endl;
    }

    return 0;
}