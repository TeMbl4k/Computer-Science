////#include <iostream>
////
////using namespace std;
////
////int main() {
////    // ¬вод данных
////    int L, Rn, Cn;
////    cout << "Enter L: ";
////    cin >> L;
////
////    int* numbers = new int[L];
////    cout << "Enter numbers:" << endl;
////    for (int i = 0; i < L; ++i) {
////        cout << "T" << i + 1 << ") ";
////        cin >> numbers[i];
////    }
////    cout << "Enter Rn: ";
////    cin >> Rn;
////    cout << "Enter Cn: ";
////    cin >> Cn;
////
////    const char symbolChars[] = { ' ', '*', '\\', '/', '+', '#' };
////
////    int d = 0;
////
////    // ѕечать рисунка
////    for (int j = 0; j < L; ++j) {
////        for (int i = 0; i < L; ++i) {
////            if ((i + j) < L)
////                cout << symbolChars[numbers[i + j]];
////
////        }
////        cout << endl;
////    }
////}
//
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int L, Rn, Cn;
//    cout << "Enter L: ";
//    cin >> L;
//
//    cout << "Enter numbers:" << endl;
//    int ch;
//    string str = "";
//    for (int i = 0; i < L; i++) {
//        cout << "T" << i + 1 << ") ";
//        cin >> ch;
//         if (ch == 0) {
//                str += " ";
//            }
//            else if (ch == 1) {
//                str += "*";
//            }
//            else if (ch == 2) {
//                str+= "\\";
//            }
//            else if (ch == 3) {
//                str+="/";
//            }
//            else if (ch == 4) {
//                str+= "+";
//            }
//            else {
//                str+= "#";
//    }
//    }
//    cout << "Enter Rn: ";
//    cin >> Rn;
//    cout << "Enter Cn: ";
//    cin >> Cn;
//
//    int d = 0;
// for (int k = 0; k <Rn;k++){
//     for (int j = 0; j <L; j++) {
//         for (int i = 0; i < L; i++) {
//             if (d>L)
//                 d = 0;
//    cout << str[d];
//          
//          d++;
//         }
//         cout << endl;
//     }
//    }
//
//
