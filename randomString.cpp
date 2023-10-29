#include <iostream>
#include <random>

using namespace std;

int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> charDistribution('A', 'Z');

    int N;
    cout << "Enter N: ";
    cin >> N;

    int* substring_lengths = new int[N];
    string substrings[N];

    for (int i = 0; i < N; ++i) {
        int length;
        cout << "N" << (i + 1) << "s) ";
        cin >> length;

        string substring;
        for (int j = 0; j < length; ++j) {
            char random_char = charDistribution(gen);
            substring.push_back(random_char);
        }

        substrings[i] = substring;
        substring_lengths[i] = length;
    }

    cout << "- Substrings -" << endl;
    for (int i = 0; i < N; ++i) {
        cout << "N[" << i << "] = " << substrings[i] << endl;
    }

    int L;
    cout << "Enter L: ";
    cin >> L;

    int indices[L];
    for (int i = 0; i < L; ++i) {
        int index;
        cout << "L" << (i + 1) << ") ";
        cin >> index;

        if (index >= 0 && index < N) {
            indices[i] = index;
        }
        else {
            cout << "Invalid index. Please enter a valid index." << endl;
            --i;
        }
    }

    cout << "- Result -" << endl;
    for (int i = 0; i < L; ++i) {
        cout << substrings[indices[i]];
    }

    cout << endl;
}