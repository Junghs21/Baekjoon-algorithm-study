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

	vector<int> dp(N);

	dp[0] = nums[0];
	int result = dp[0];

	for (int i = 1; i < nums.size(); i++) {
		dp[i] = max(nums[i], dp[i - 1] + nums[i]);
		result = max(result, dp[i]);
	}

	cout << result;
}