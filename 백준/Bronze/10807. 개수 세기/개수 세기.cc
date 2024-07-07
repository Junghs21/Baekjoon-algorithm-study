#include <iostream>
#include <vector>

using namespace std;

int main() {

	int result = 0;
	int count, findNumber;
	cin >> count;

	vector<int> numbers(count);

	for (int i = 0; i < count; i++) {
		cin >> numbers[i];
	}

	cin >> findNumber;

	for (int i = 0; i < numbers.size(); i++) {
		if (findNumber == numbers[i]) {
			result++;
		}
	}

	cout << result;
}