#include <iostream>

using namespace std;

int main() {
	int num_count;
	cout << "Enter amount of numbers: ";
	cin >> num_count;

	int* numbers = new int[num_count];

	for (int i = 0; i < num_count; ++i) {
		cout << i + 1 << ") "; cin >> numbers[i];
	}

	// Выделяем динамически память для двумерного массива квадрата
	int** result = new int* [num_count];
	for (int i = 0; i < num_count; ++i) {
		result[i] = new int[num_count];
	}

	for (int i = 0; i < num_count; ++i) {
		for (int j = 0; j < num_count; ++j) {
			result[i][j] = 0;
		}
	}

	// Заполняем квадрат числами согласно условиям задачи
	for (int i = 0; i < num_count; ++i) {
		for (int j = 0; j < num_count; ++j)
		{
			if ((i == 0) || (j == 0)) {
				if (i == 0)
					result[i][j] = numbers[j];

				if (j == 0)
					result[i][j] = numbers[i];
			}

			else {
				if ((i == num_count - 1) && (j != 0))
					result[i][j] = numbers[num_count - j - 1];

				if ((j == num_count - 1) && (i != 0))
					result[i][j] = numbers[num_count - i - 1];
			}
		}
	}

	// Выводим результат
	cout << "- Result -" << endl;
	for (int i = 0; i < num_count; ++i) {
		for (int j = 0; j < num_count; ++j)
		{
			if (result[i][j] == 0)
				cout << "  ";
			else
				cout << result[i][j] << " ";
		}
		cout << endl;
	}

	delete[] numbers;
	for (int i = 0; i < num_count; ++i) {
		delete[] result[i];
	}
	delete[] result;
}