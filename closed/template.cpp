//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int L, Rn, Cn, ch;
//    cout << "Enter L: ";
//    cin >> L;
//
//	char* str = new char[L];
//
//
//	cout << "Enter numbers:" << endl;
//    for (int i = 0; i < L; i++) {
//        cout << "T" << i + 1 << ") ";
//        cin >> ch;
//		switch (ch)
//		{
//		case(0):
//			str[i] = ' ';
//			break;
//		case(1):
//			str[i] = '*';
//			break;
//		case(2):
//			str[i] = '\\';
//			break;
//		case(3):
//			str[i] = '/';
//			break;
//		case(4):
//			str[i] = '+';
//			break;
//		case(5):
//			str[i] = '#';
//			break;
//		default:
//			break;
//		}
//    }
//
//	cout << "Enter Rn: ";
//	cin >> Rn;
//	cout << "Enter Cn: ";
//	cin >> Cn;
//
//	for (int i = 0; i < Rn; i++) {
//		for (int j = 0; j < L; j++) {
//			for (int k = 0; k < Cn; k++) {
//				for (int d = 0; d < L; d++) {
//					cout << str[(j - d + L - 1) % L];
//				}
//			}
//			cout << endl;
//		}
//	}
//	delete[] str;
//}
