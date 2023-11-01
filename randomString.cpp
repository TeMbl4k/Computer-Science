//#include <iostream>
//#include <random>
//
//using namespace std;
//
//char getRandomChar() {
//    int randomNum = rand() % 26;
//    return static_cast<char>(randomNum + 65);
//}
//
//void printSubstrings(int N, int* lengths) {
//    cout << "- Substrings -" << endl;
//
//    for (int i = 0; i < N; i++) {
//        cout << "N[" << i << "] = ";
//
//        for (int j = 0; j < lengths[i]; j++) {
//            cout << getRandomChar();
//
//        }
//
//        cout << " ";
//    }
//
//    cout << endl;
//}
//
//void printResult(int L, int* indices, int N, int* lengths) {
//    cout << "- Result - " << endl;
//
//    for (int i = 0; i < L; i++) {
//        int index = indices[i];
//
//        if (index >= 0 && index < N) {
//            for (int j = 0; j < lengths[index]; j++) {
//                cout << getRandomChar();
//            }
//        }
//    }
//
//    cout << endl;
//}
//
//int main() {
//    int N;
//    cout << "Enter N: ";
//    cin >> N;
//
//    int* lengths = new int[N];
//    for (int i = 0; i < N; i++) {
//        cout << "N" << i + 1 << "s) ";
//        cin >> lengths[i];
//    }
//
//    printSubstrings(N, lengths);
//
//    int L;
//    cout << "Enter L: ";
//    cin >> L;
//
//    int* indices = new int[L];
//    for (int i = 0; i < L; i++) {
//        cout << "L" << i + 1 << ") ";
//        cin >> indices[i];
//    }
//
//    printResult(L, indices, N, lengths);
//
//}