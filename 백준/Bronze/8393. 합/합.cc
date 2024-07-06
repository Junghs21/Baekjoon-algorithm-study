#include <iostream>

using namespace std;

int main() {

	int result = 0;
	int num;
	cin >> num;

	for (int i = 1;i <= num;i++) {
		result += i;
	}

	cout << result;
}