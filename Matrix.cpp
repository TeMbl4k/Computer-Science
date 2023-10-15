//#include <iostream>
//#include <random>
//#include <iomanip>
//
//using namespace std;
//
//int main() {
//	int a[10][10];
//
//	int value;
//
//	int min_value;
//	cout << "Enter start of range: ";
//	cin >> min_value;
//
//	int max_value;
//	cout << "Enter end of range: ";
//	cin >> max_value;
//
//	int sum = 0;
//
//	double s_i = 0;
//	double s_j = 0;
//
//	random_device rd;
//	mt19937 gen(rd());
//	
//	uniform_int_distribution <> dis(min_value, max_value);
//
//	 for (int i = 0; i < 10; ++i)  // Заполняем матрицу aboba
//	 {
//		 for (int j = 0; j < 10; ++j) 
//		 {
//			 a[i][j] = dis(gen);
//		 }
//	 }
//
//	 for (int i = 0; i < 10; ++i)  // Сумма эл. матрицы
//	 {
//		 for (int j = 0; j < 10; ++j)
//		 {
//			 sum += a[i][j];
//		 }
//	 }
//
//	 cout << "---------------------------------------Matrix---------------------------------------- " << endl;
//
//	 cout << fixed << setprecision(2) << setw(5) << sum / 100; // Вывод ср.арифм. матрицы
//
//	 for (int i = 0; i < 10; ++i) // Получаем сумму каждого столбца и выводим ср. знач.
//	 {
//		 s_i = 0;
//		 
//		 for (int j = 0; j < 10; ++j)
//		 {
//			 s_i += a[j][i];
//		 }
//
//		 cout << fixed << setprecision(2) << setw(8) << s_i/10;
//	 }
//
//	 cout << endl;
//
//	 for (int i = 0; i < 10; ++i)  // Выводим матрицу
//	 {
//		 s_j = 0;
//
//		 for (int j = 0; j < 10; ++j) // Получаем сумму каждой строки и выводим ср. знач.
//		 {
//			 s_j += a[i][j];
//		 }
//
//		 cout << fixed << setprecision(2) << setw(5) << s_j/10;
//
//		 for (int j = 0; j < 10; ++j)
//		 {
//			 cout << setw(8) << a[i][j];
//		 }
//		 cout << endl;
//	 }
//}
