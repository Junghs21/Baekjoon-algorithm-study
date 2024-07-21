#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	vector<int> result;

	int bag;
	cin >> bag;

	if (bag % 3 == 0) {
		result.push_back(bag / 3);
	}

	if (bag % 5 == 0) {
		result.push_back(bag / 5);
	}

	for (int i = 0; i < 1000;i++) {
		for (int j = 0; j < 1000; j++) {
			if ((3 * i + 5 * j) == bag) {
				result.push_back(i + j);
			}
		}
	}

	if (result.empty()) {
		result.push_back(-1);
	}

	sort(result.begin(), result.end());

	cout << result[0];
}