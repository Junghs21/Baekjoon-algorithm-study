#include <iostream>
#include <vector>

using namespace std;

int main() {

	int whiteChessPiece[6] = { 1,1,2,2,2,8 };
	int haveChessPiece[6];
	int result[6] = { 0 };

	for (int i = 0; i < 6;i++) {
		cin >> haveChessPiece[i];
	}

	for (int i = 0; i < 6; i++) {
		if (whiteChessPiece[i] != haveChessPiece[i]) {
				result[i] = whiteChessPiece[i] - haveChessPiece[i];
		}
	}

	for (int i = 0; i < 6;i++) {
		cout << result[i] << " ";
	}
}