//#include <iostream>
//
//using namespace std;
//
//int find_lenght_num(int num) {
//    int length = 0;
//
//    while (num != 0) {
//        num = num / 10;
//        ++length;
//    }
//
//    return length;
//}
//
//int find_lenght_segment(int lenght1, int lenght2) {
//    return lenght1 + lenght2;
//}
//
//
//int main() {
//    int A, B, C;
//
//    cout << "Enter A: ";
//    cin >> A;
//    cout << "Enter B: ";
//    cin >> B;
//    cout << "Enter C: ";
//    cin >> C;
//
//    cout << "Length of AB: " << find_lenght_segment(find_lenght_num(A), find_lenght_num(B)) << endl;
//                                                                                            
//    cout << "Length of BC: " << find_lenght_segment(find_lenght_num(B), find_lenght_num(C)) << endl;
//                                                                                            
//    cout << "Length of AC: " << find_lenght_segment(find_lenght_num(A), find_lenght_num(C)) << endl;
//}