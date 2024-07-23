#include <iostream>
#include <vector>

using namespace std;

int main() {

	char Matrix[5][15] = { '\0' };

	for (int i = 0; i < 5; i++) {
		cin >> Matrix[i];
	}

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (Matrix[j][i] >= '0') {
				cout << Matrix[j][i];
			}
		}
	}
}