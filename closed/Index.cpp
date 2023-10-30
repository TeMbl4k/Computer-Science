//#include <iostream>
//
//using namespace std;
//
//int finder(int value, int array_size, int* array) {
//   for (int i = 0; i <= array_size; ++i) {
//       if (value == array[i])
//           return i;
//    }
//   return -1;
//}
//
//
//int main() {
//    int array, array_size, value1, value2;
//
//    cout << "Enter array size: ";
//    cin >> array_size;
//
//    int* nums = new int[array_size];
//
//    for (int i = 0; i < array_size; ++i) {
//        cout << "A" << i + 1 << ") ";
//        cin >> nums[i];
//    }
//
//    cout << "Enter first value: ";
//    cin >> value1;
//
//    cout << "Index of first value: ";
//
//    if (finder(value1, array_size, nums) != -1)
//        cout << finder(value1, array_size, nums) << endl;
//    else
//        cout << "null" << endl;
//
//    cout << "Enter second value: ";
//    cin >> value2;
//
//    cout << "Index of second value: ";
//
//    if (finder(value2, array_size, nums) != -1)
//        cout << finder(value2, array_size, nums);
//    else
//        cout << "null";
//
//    delete[] nums;
//}