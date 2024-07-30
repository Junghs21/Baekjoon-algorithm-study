#include <iostream>

using namespace std;

int main() {

	int numberOfLine;
	cin >> numberOfLine;

	for (int i = 1; i < numberOfLine; i++) {
		for (int j = numberOfLine; j > i; j--) {
			cout << " ";
		}

		for (int k = 0; k < (i * 2) - 1; k++) {
			cout << "*";
		}

		cout << "\n";
	}

	for (int i = 0; i < numberOfLine * 2 - 1;i++) {
		cout << "*";
	}
	cout << "\n";

	for (int i = numberOfLine - 1; i > 0; i--) {
		for (int j = numberOfLine; j > i; j--) {
			cout << " ";
		}

		for (int k = 0; k < (i * 2) - 1; k++) {
			cout << "*";
		}

		cout << "\n";
	}
}