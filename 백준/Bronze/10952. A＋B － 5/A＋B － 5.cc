#include <iostream>

using namespace std;

int main() {

	int A, B;

	do
	{
		cin >> A >> B;

		if (A == 0 && B == 0) {
			return 0;
		}
		else {
			cout << A + B << "\n";
		}
	} while (A != 0 && B != 0);
}