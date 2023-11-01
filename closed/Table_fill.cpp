#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    double** table = new double* [rows];
    for (int i = 0; i < rows; ++i) {
        table[i] = new double[cols];
        for (int j = 0; j < cols; ++j) {
            table[i][j] = 0.0;
        }
    }

    int index_row, col_index;
    double value;
    int continueInput = 1;

    while (continueInput) {
        cout << "Enter data (row index / column index / value): ";
        cin >> index_row >> col_index >> value;
        table[index_row][col_index] = value;

        cout << "Continue? (1 - yes / 0 - no): ";
        cin >> continueInput;
    }

    cout << "- Table -" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << fixed << setw(7) << setprecision(3) << table[i][j] << "  ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; ++i) {
        delete[] table[i];
    }
    delete[] table;
}