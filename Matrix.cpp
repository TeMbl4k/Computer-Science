#include <iostream>
#include <random>
#include <iomanip>

using namespace std;

int main() {
	const int matrix_size = 10;

	int a[matrix_size][matrix_size];

	int value = 0;

	int min_value;
	cout << "Enter start of range: ";
	cin >> min_value;

	int max_value;
	cout << "Enter end of range: ";
	cin >> max_value;

	int sum = 0;

	double s_i = 0;
	double s_j = 0;

	random_device rd;
	mt19937 gen(rd());

	uniform_int_distribution <> dis(min_value, max_value);

	for (int i = 0; i < matrix_size; ++i) 
	{
		for (int j = 0; j < matrix_size; ++j)
		{
			a[i][j] = dis(gen);
		}
	}

	for (int i = 0; i < matrix_size; ++i)
	{
		for (int j = 0; j < matrix_size; ++j)
		{
			sum += a[i][j];
		}
	}

	cout << "----------------------------------------Matrix---------------------------------------- " << endl;

	cout << fixed << setprecision(2) << setw(6) << sum / static_cast <double>(matrix_size * matrix_size);

	for (int i = 0; i < matrix_size; ++i)
	{
		s_i = 0;

		for (int j = 0; j < matrix_size; ++j)
		{
			s_i += a[j][i];
		}

		cout << fixed << setprecision(2) << setw(8) << s_i / matrix_size;
	}

	cout << endl;

	for (int i = 0; i < matrix_size; ++i)
	{
		s_j = 0;

		for (int j = 0; j < matrix_size; ++j)
		{
			s_j += a[i][j];
		}

		cout << fixed << setprecision(2) << setw(6) << s_j / matrix_size;

		for (int j = 0; j < matrix_size; ++j)
		{
			cout << setw(8) << a[i][j];
		}
		cout << endl;
	}
}
