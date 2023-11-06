#include <iostream>

using namespace std;

bool finder(int value, int array_size, int* array, int& index) {
    for (int i = 0; i < array_size; ++i) {
        if (value == array[i]) {
            index = i;
            return true; // Число найдено
        }
    }
    index = -1; // Число не найдено, возвращаем -1 в качестве индекса
    return false; // Признак отсутствия числа
}

int main() {
    int array_size, value1, value2;

    cout << "Enter array size: ";
    cin >> array_size;

    int* nums = new int[array_size];

    for (int i = 0; i < array_size; ++i) {
        cout << "A" << i + 1 << ") ";
        cin >> nums[i];
    }

    cout << "Enter first value: ";
    cin >> value1;

    int index1;
    bool found1 = finder(value1, array_size, nums, index1);

    cout << "Index of first value: ";
    if (found1) {
        cout << index1 << endl;
    }
    else {
        cout << "null" << endl;
    }

    cout << "Enter second value: ";
    cin >> value2;

    int index2;
    bool found2 = finder(value2, array_size, nums, index2);

    cout << "Index of second value: ";
    if (found2) {
        cout << index2 << endl;
    }
    else {
        cout << "null" << endl;
    }

    delete[] nums;
}