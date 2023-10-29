//#include <iostream>
//using namespace std;
//
//int main() {
//    int numCount;
//    cout << "Enter amount of numbers: ";
//    cin >> numCount;
//
//    int* numbers = new int[numCount];
//
//    for (int i = 0; i < numCount; ++i) {
//        cout << i + 1 << ") ";
//        cin >> numbers[i];
//    }
//     for (int i = 0; i < numCount; ++i) {
//         cout << numbers[i] << " ";
//     }
//     cout << endl;
//
//     if (numCount != 1) {
//        for (int i = 1; i < numCount - 1; ++i) {
//            cout << numbers[i] << " ";
//            for (int j = 1; j < numCount - 1; ++j) {
//                cout << "  ";
//            }
//            cout << numbers[numCount - i - 1] << endl;
//        }
//
//        for (int i = 0; i < numCount; ++i) {
//            cout << numbers[numCount - i - 1] << " ";
//        }
//        cout << endl;
//    }
//
//    delete[] numbers;
//}