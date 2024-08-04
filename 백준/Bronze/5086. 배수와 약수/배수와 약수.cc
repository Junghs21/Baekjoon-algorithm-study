#include <iostream>

using namespace std;

int main() {

	int N, M;

	do {
		cin >> N >> M;

		if ((N == 0 && M != 0) || (M == 0 && N != 0)) {
			cout << "neither" << "\n";
		}
		else if (N == M) {
			break;
		}
		else if (M % N == 0) {
			cout << "factor" << "\n";
		}
		else if ((N % M == 0) && (N != 0 || M != 0)) {
			cout << "multiple" << "\n";
		}
		else {
			cout << "neither" << "\n";
		}
	} while (N != 0 || M != 0);
}