#include <iostream>
#include <vector>

using namespace std;

int main() {

	int maxValueIndex, maxValue;
	vector<int> numbers(9);

	for (int i = 0; i < numbers.size(); i++) {
		cin >> numbers[i];
	}

	maxValue = numbers[0];

	for (int i = 1; i < numbers.size(); i++) {
		maxValue = max(maxValue, numbers[i]);
	}

	for (int i = 0; i < numbers.size(); i++) {
		if (maxValue == numbers[i]) {
			maxValueIndex = i;
		}
	}

	cout << maxValue << "\n" << maxValueIndex + 1;
}