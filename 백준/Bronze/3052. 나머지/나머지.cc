#include <iostream>
#include <vector>

using namespace std;

int main() {

	int num[10];
	int result = 0;
	int pos;
	vector<int> mod(42);

	for (int i = 0; i < 10; i++) {
		cin >> num[i];
	}

	for (int i = 0;i < 10; i++) {
		pos = num[i] % 42;
		mod[pos]++;
	}

	for (int i = 0; i < mod.size();i++) {
		if (mod[i] != 0) {
			result++;
		}
	}

	cout << result;
}