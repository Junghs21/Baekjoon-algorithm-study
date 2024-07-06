#include <iostream>

using namespace std;

int main() {

	int numberOfTestcase;
	cin >> numberOfTestcase;

	for (int i = 1; i <= numberOfTestcase;i++) {
		int A, B;
		cin >> A >> B;

		cout << "Case #" << i << ": " << A << " + " << B << " = " << A + B << "\n";
	}
}