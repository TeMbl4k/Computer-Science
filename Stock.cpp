//#include <iostream>
//#include <random>
//#include <iomanip>
//
//using namespace std;
//
//int main() {
//	int min_stock_price = 10;
//	int max_stock_price = 300000;
//
//	int div_stock_price = 0;
//
//	int cur_stock_price = 150000;
//
//	random_device rd;
//	mt19937 gen(rd());
//
//	uniform_int_distribution <> dis(-50000, 50000);
//
//	cout << noshowpos << setw(2) << 1 << ") " << setw(6) << cur_stock_price << "$" << " : ";
//	cout << setw(6) << showpos << div_stock_price << "$ |";
//
//	for (int i = 1; i <= (cur_stock_price / 5000); ++i) // Цикл для вывода i количества звёзд
//	{
//		cout << "*";
//	}
//	cout << endl;
//
//	div_stock_price = dis(gen);
//
//	for (int i = 2; i <= 36; ++i)
//	{
//		if ((10 < (cur_stock_price + div_stock_price)) && ((cur_stock_price + div_stock_price) < 300000))
//		{
//			cur_stock_price += div_stock_price;
//
//			cout << noshowpos << setw(2) << i << ") " << setw(6) << cur_stock_price << "$" << " : ";
//			cout << setw(6) << showpos << div_stock_price << "$ |";
//
//			for (int i = 1; i <= (cur_stock_price / 5000); ++i) // Цикл для вывода i количества звёзд
//			{
//				cout << "*";
//			}
//			cout << endl;
//
//			div_stock_price = dis(gen);
//		}
//
//		else if (10 > (cur_stock_price + div_stock_price))
//		{
//			int dif = div_stock_price + 50000;
//			div_stock_price = dif;
//
//			cur_stock_price += div_stock_price;
//
//			cout << noshowpos << setw(2) << i << ") " << setw(6) << cur_stock_price << "$" << " : ";
//			cout << setw(6) << showpos << div_stock_price << "$ |";
//
//			for (int i = 1; i <= (cur_stock_price / 5000); ++i) // Цикл для вывода i количества звёзд
//			{
//				cout << "*";
//			}
//			cout << endl;
//
//			div_stock_price = dis(gen);
//		}
//
//		else 
//		{
//			int dif = div_stock_price - 50000;
//			div_stock_price = dif;
//
//			cur_stock_price += div_stock_price;
//
//			cout << noshowpos << setw(2) << i << ") " << setw(6) << cur_stock_price << "$" << " : ";
//			cout << setw(6) << showpos << div_stock_price << "$ |";
//
//			for (int i = 1; i <= (cur_stock_price / 5000); ++i) // Цикл для вывода i количества звёзд
//			{
//				cout << "*";
//			}
//			cout << endl;
//
//			div_stock_price = dis(gen);
//		}
//	}
//}
//
