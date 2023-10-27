#include <iostream>

using namespace std;

void Partitioning(int number, int& a1, int& a2, int& a3, int& a4) {
    a1 = number / 1000;
    number %= 1000;
    a2 = number / 100;
    number %= 100;
    a3 = number / 10;
    a4 = number % 10;
}

void print(int a1, int a2, int a3, int a4) {
    cout << "A1: " << a1 << "; A2: " << a2 << 
    "; A3: " << a3 << "; A4: " << a4 << "." << endl;
}

int main(){
    int A, B, C;
    int a1, a2, a3, a4;
    int b1, b2, b3, b4;
    int c1, c2, c3, c4;

    cout << "Enter A: ";
    cin >> A;
    Partitioning(A, a1, a2, a3, a4);
    print(a1, a2, a3, a4);

    cout << "Enter B: ";
    cin >> B;
    Partitioning(B, b1, b2, b3, b4);
    print(b1, b2, b3, b4);

    cout << "Enter C: ";
    cin >> C;
    Partitioning(C, c1, c2, c3, c4);
    print(c1, c2, c3, c4);

}

