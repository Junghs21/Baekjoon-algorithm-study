#include <iostream>
#include <vector>
#include <algorithm>	//sort를 사용하기 위한 헤더 파일

using namespace std;

int main() {

	int maxValueIndex;
	int count;
	cin >> count;

	vector<int> numbers(count);
	maxValueIndex = numbers.size();

	for (int i = 0; i < numbers.size(); i++) {
		cin >> numbers[i];
	}

	sort(numbers.begin(), numbers.end());

	cout << numbers[0] << " " << numbers[maxValueIndex - 1];
}