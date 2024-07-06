#include <iostream>

using namespace std;

int main() {

	int numberOfLine;
	cin >> numberOfLine;

	for (int i = 1; i <= numberOfLine; i++) {
		for (int j = numberOfLine; j > i;j--) {
			cout << " ";
		}
		for (int k = 0; k < i; k++) {
			cout << "*";
		}
		cout << "\n";
	}
}