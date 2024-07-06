#include <iostream>

using namespace std;

int main() {

	int numberOfTestcase;
	cin >> numberOfTestcase;

	for (int i = 0; i < numberOfTestcase; i++) {
		int A, B;
		cin >> A >> B;

		cout << A + B << endl;
	}
}