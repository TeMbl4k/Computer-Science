//#include <iostream>
//
//using namespace std;
//
//int main()
//{
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
//	cout << "- Result -" << endl;
//
//	if ((div != 0) && (start != end))
//	{
//		if (start < end) {
//			for (start; start <= end; ++start)
//			{
//				if (start % div == 0)
//					cout << start << endl;
//			}
//		}
//
//		else {
//			for (start; start >= end; --start)
//			{
//				if (start % div == 0)
//					cout << start << endl;
//			}
//		}
//	}
//
//	else if ((start == end) && (start < div)) {
//		cout << "Empty";
//	}
//
//	else if ((start == end) && (div == 1)) {
//		cout << start;
//	}
//
//	else {
//		cout << "Empty";
//	}
//}