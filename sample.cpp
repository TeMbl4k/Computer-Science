#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Получаем входные данные от пользователя
    int L, Rn, Cn;
    cout << "Enter L: ";
    cin >> L;

    vector<int> symbols(L);
    for (int i = 0; i < L; ++i) {
        cout << "T" << i + 1 << ") ";
        cin >> symbols[i];
    }

    cout << "Enter Rn: ";
    cin >> Rn;
    cout << "Enter Cn: ";
    cin >> Cn;

    // Создаем строку символов
    string symbolString;
    for (int symbol : symbols) {
        if (symbol == 0) {
            symbolString += " ";
        }
        else if (symbol == 1) {
            symbolString += "*";
        }
        else if (symbol == 2) {
            symbolString += "\\";
        }
        else if (symbol == 3) {
            symbolString += "/";
        }
        else if (symbol == 4) {
            symbolString += "+";
        }
        else if (symbol == 5) {
            symbolString += "#";
        }
    }

    // Печатаем рисунок
    int symbolStringLength = symbolString.length();
    for (int i = 0; i < Rn * L; ++i) {
        for (int j = 0; j < Cn * symbolStringLength; ++j) {
            cout << symbolString[(j / Cn + i) % symbolStringLength];
        }
        cout << endl;
    }

    return 0;
}
