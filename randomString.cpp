//#include <iostream>
//#include <random>
//
//using namespace std;
//
//int main() {
//    int N, L, lenght;
//    cout << "Enter N: ";
//    cin >> N;
//
//    random_device rd;
//    mt19937 gen(rd());
//    uniform_int_distribution<int> dis('A', 'Z');
//
//    char** array = new char* [N];
//    for (int i = 0; i < N; ++i) {
//        cout << "N" << i + 1 << "s) ";
//        cin >> L;
//        array[i] = new char[L];
//
//        for (int j = 0; j < L; ++j) {
//            array[i][j] = static_cast<char>(dis(gen));
//        }
//    }
//
//    cout << "- Substrings -" << endl;
//    for (int i = 0; i < N; ++i) {
//        cout << "N[" << i << "] = ";
//        for (int j = 0; j < array[i][j] != '\0'; ++j) {
//            cout << array[i][j];
//        }
//        cout << endl;
//    }
//
//    cout << "Enter L: ";
//    cin >> lenght;
//
//    int num;
//    int* nums = new int[lenght];
//
//    for (int i = 0; i < lenght; ++i) {
//        cout << "L" << i + 1 << ") ";
//        cin >> nums[i];
//    }
//
//    cout << "- Result -" << endl;
//    for (int i = 0; i < lenght; ++i) {
//        for (int j = 0; j < array[nums[i]][j] != '\0'; ++j) {
//            cout << array[nums[i]][j];
//        }
//    }
//
//
//    for (int i = 0; i < N; ++i) {
//        delete[] array[i];
//    }
//    delete[] array;
//
//}