//#include <iostream>
//using namespace std;
//
//int main() {
//	int start;
//	int end;
//	int div;
//
//	cout << "Enter start of range: ";
//	cin >> start;
//	cout << "Enter end of range: ";
//	cin >> end;
//	cout << "Enter divider: ";
//	cin >> div;
//
//	bool flag = true;
//
//	cout << "-Result-" << endl;
//
//	if (div != 0)
//	{
//		if (start < end) {
//			for (start; start <= end; ++start) {
//				if (start % div == 0) {
//					cout << start << endl;
//					flag = false;
//				}
//			}
//		}
//
//		else {
//			for (start; start >= end; --start)
//			{
//				if (start % div == 0) {
//					cout << start << endl;
//					flag = false;
//				}
//			}
//		}
//	}
//
//	if (flag) {
//		cout << "Empty";
//	}
//}