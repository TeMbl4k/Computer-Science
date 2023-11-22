#include <iostream>

using namespace std;

bool finder(int value, int array_size, int array[], int& index) {
    for (int i = 0; i < array_size; ++i) {
        if (value == array[i]) {
            index = i;
            return true;
        }
    }
    return false;
}

int main() {
    int array_size, value, index;

    cout << "Enter array size: ";
    cin >> array_size;

    int* nums = new int[array_size];

    for (int i = 0; i < array_size; ++i) {
        cout << "A" << i + 1 << ") ";
        cin >> nums[i];
    }

    cout << "Enter first value: ";
    cin >> value;

    cout << "Index of first value: ";
    if (finder(value, array_size, nums, index))
        cout << index << endl;
    else
        cout << "null" << endl;

    cout << "Enter second value: ";
    cin >> value;

    cout << "Index of second value: ";
    if (finder(value, array_size, nums, index))
        cout << index << endl;
    else
        cout << "null" << endl;
    
    delete[] nums;
}