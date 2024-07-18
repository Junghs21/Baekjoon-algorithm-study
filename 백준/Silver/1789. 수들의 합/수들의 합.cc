#include <iostream>

using namespace std;

int main() {

	long long int count = 0;
	long long int num = 0;
	
	long long int S;
	cin >> S;

	for (int i = 1; num != S; i++) {
		num += i;
		count++;

		if (num > S) {
			num -= i;
			count--;

			break;
		}
	}

	cout << count;
}