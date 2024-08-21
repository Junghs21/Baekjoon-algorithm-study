#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int N;
	cin >> N;

	int result = -1000;

	vector<int> nums(N, 0);
	for (int i = 0; i < N; i++) {
		cin >> nums[i];
	}

	vector<int> dp(N, 0);
	dp[0] = nums[0];
	for (int i = 1; i < N; i++) {
		dp[i] = max(nums[i], dp[i - 1] + nums[i]);
		result = max(result, dp[i]);
	}

	if (result < dp[0]) {
		result = dp[0];
	}

	cout << result;

}