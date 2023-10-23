//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int main() {
//	double val;
//	double wts;
//	double wavg = 0;
//
//	int amount;
//	cout << "Enter amount of numbers: ";
//	cin >> amount;
//
//	double* values = new double[amount];
//	double* weights = new double[amount];
//	double* values_weights = new double[amount];
//	double sum_weights = 0;
//	double sum_values_weights = 0;
//
//	for (int i = 0; i < amount; ++i)
//	{
//		cout << i + 1 << ") "; cin >> values[i]; cin >> weights[i];
//	}
//
//	for (int i = 0; i < amount; ++i) {
//		values_weights[i] = values[i] * weights[i];
//		sum_values_weights += values_weights[i];
//		sum_weights += weights[i];
//	}
//
//	wavg = sum_values_weights / sum_weights;
//
//	cout << "-Result-" << endl;
//	cout << "Val: ";
//	for (int i = 0; i < amount; ++i) {
//		cout << fixed << setprecision(3) << values[i] << " ";
//		}
//	cout << endl;
//
//
//	cout << "Wts: ";
//		for (int i = 0; i < amount; ++i)
//		{
//			cout << fixed << setprecision(3) << weights[i] << " ";
//		}
//	cout << endl;
//
//	cout << "Wavg: " << fixed << setprecision(3) << wavg;
//}