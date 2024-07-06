#include <iostream>

using namespace std;

int main() {

	int numberOfLine;
	cin >> numberOfLine;

	for (int i = 1; i <= numberOfLine; i++) {
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}