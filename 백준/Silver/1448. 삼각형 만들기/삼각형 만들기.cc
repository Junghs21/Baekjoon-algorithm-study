#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int maxValue = -1;

	int numberOfStraw;
	cin >> numberOfStraw;

	vector<int> straws(numberOfStraw);

	for (int i = 0; i < numberOfStraw;i++) {
		cin >> straws[i];
	}

	sort(straws.begin(), straws.end(), greater<int>());

	for (int i = 0; i < numberOfStraw - 2;i++) {
		if (straws[i] < (straws[i + 1] + straws[i + 2])) {
			maxValue = max(maxValue, straws[i] + straws[i + 1] + straws[i + 2]);
		}
	}

	cout << maxValue;
}