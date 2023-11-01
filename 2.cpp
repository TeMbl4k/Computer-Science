#include <iostream>
#include <random>

using namespace std;

int main() {
    int N, L, lenght;
    cout << "Enter N: ";
    cin >> N;

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis('A', 'Z');

    char** array = new char* [N];
    for (int i = 0; i < N; ++i) {
        cout << "N" << i + 1 << "s)";
        cin >> L;
        array[i] = new char[L];

        for (int j = 0; j < L; ++j) {
            array[i][j] = static_cast<char>(dis(gen));
        }
    }

    cout << "- Substrings -" << endl;
    for (int i = 0; i < N; ++i) {
        cout << "N[" << i << "] = ";
        for (int j = 0; j < array[i][j] != '\0'; ++j) {
            cout << array[i][j];
        }
        cout << endl;
    }

    cout << "Enter L: ";
    cin >> lenght;

    for (int i = 0; i < N; ++i) {
        delete[] array[i];
    }
    delete[] array;
    
}