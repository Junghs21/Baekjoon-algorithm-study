#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int N;
	cin >> N;

	vector<int> nums(N);
	for (int i = 0; i < N;i++) {
		cin >> nums[i];
	}

	sort(nums.begin(), nums.end());

	for (int i = 0; i < N; i++) {
		cout << nums[i] << "\n";
	}
}