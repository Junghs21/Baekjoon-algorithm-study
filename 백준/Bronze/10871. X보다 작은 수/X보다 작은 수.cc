#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> result;
	int count, minValue;
	cin >> count >> minValue;

	vector<int> numbers(count);

	for (int i = 0; i < numbers.size(); i++) {
		cin >> numbers[i];
		if (numbers[i] < minValue) {
			result.push_back(numbers[i]);
		}
	}

	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}
}