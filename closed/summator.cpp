#include <iostream>

using namespace std;


int summator(int a, int b) {
	if (b == 0)
		return a;
	else if (b > 0) {
		a += 1;
		b += -1;
		return summator(a, b);
	}
	else {
		a += -1;
		b += +1;
		return summator(a, b);
	}
}



int main() {
	int a, b;

	cout << "Enter A: ";
	cin >> a;

	cout << "Enter B: ";
	cin >> b;

	cout << "Sum: " << summator(a,b);

}