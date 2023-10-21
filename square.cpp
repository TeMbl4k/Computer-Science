#include <iostream>

using namespace std;

int main() {
	int num_count;
	cout << "Enter amount of numbers: ";
	cin >> num_count;


	// �������� ����������� ������ ��� ������� �����
	int* numbers = new int[num_count];

	// �������� ����� �� ������������ � ��������� �� � ������
	cout << "Enter numbers:" << endl;
	for (int i = 0; i < num_count; ++i) {
		cout << i + 1 <<  ") ";
		cin >> numbers[i];
	}

	// �������� ����������� ������ ��� ���������� ������� ��������
	int** result = new int* [num_count];
	for (int i = 0; i < num_count; ++i) {
		result[i] = new int[num_count];
	}


	// ��������� ������� ������� �������� �������� ������
	for (int i = 0; i < num_count; ++i) {
		for (int j = 0; j < num_count; ++j)
				result[i][j] = numbers[j];
		}
	}

	// ������� ���������
	cout << "- Result -" << endl;
	for (int i = 0; i < num_count; ++i) {
		for (int j = 0; j < num_count; ++j) {
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