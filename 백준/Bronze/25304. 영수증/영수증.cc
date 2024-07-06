#include <iostream>

using namespace std;

int main() {

	int totalPrice, numberOfItem;
	cin >> totalPrice >> numberOfItem;

	for (int i = 0; i < numberOfItem; i++) {
		int itemPrice, itemCount;
		cin >> itemPrice >> itemCount;

		totalPrice -= (itemPrice * itemCount);
	}

	if (totalPrice == 0) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}