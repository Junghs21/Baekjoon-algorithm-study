#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;

	int numberOfLong;
	numberOfLong = N / 4;

	for (int i = 0; i < numberOfLong; i++) {
		cout << "long ";
	}

	cout << "int";
}