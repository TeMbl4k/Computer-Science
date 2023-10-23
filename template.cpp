//#include <iostream>
//
//using namespace std;
//
//int main() {
//    // ¬вод данных
//    int L, Rn, Cn;
//    cout << "Enter L: ";
//    cin >> L;
//
//    int* numbers = new int[L];
//    cout << "Enter numbers:" << endl;
//    for (int i = 0; i < L; ++i) {
//        cout << "T" << i + 1 << ") ";
//        cin >> numbers[i];
//    }
//    cout << "Enter Rn: ";
//    cin >> Rn;
//    cout << "Enter Cn: ";
//    cin >> Cn;
//
//    // ѕечать рисунка
//    int patternLength = L * Cn;
//    for (int r = 0; r < Rn; ++r) {
//        for (int i = 0; i < patternLength; ++i) {
//           if (numbers[i % L] == 0) {
//                 cout << " ";
//           }
//           else if (numbers[i % L] == 1) {
//                cout << "*";
//           }
//           else if (numbers[i] == 2) {
//                 cout << "\\";
//           }
//           else if (numbers[i] == 3) {
//                cout << "/";
//           }
//           else if (numbers[i] == 4) {
//                cout << "+";
//           }
//           else if (numbers[i] == 5) {
//               cout << "#";
//           }
//        }
//        cout << endl;
//    }
//
//    return 0;
//}