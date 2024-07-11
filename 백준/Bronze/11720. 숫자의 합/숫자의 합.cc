#include <iostream>

using namespace std;

int main() {

	double result = 0;

	int numberOfTry;
	char number;
	cin >> numberOfTry;

	for (int i = 0; i < numberOfTry;i++) {
		cin >> number;

		result = result + (static_cast<int>(number) - 48);
	}

	cout << result;
}