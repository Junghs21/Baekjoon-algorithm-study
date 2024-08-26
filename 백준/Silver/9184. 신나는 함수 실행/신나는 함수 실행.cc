#include <iostream>

using namespace std;

int dp[101][101][101];

int w(int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0) {
		if (dp[a + 50][b + 50][c + 50] == 0) {
			dp[a + 50][b + 50][c + 50] = 1;

			return dp[a + 50][b + 50][c + 50];
		}
		else {
			return dp[a + 50][b + 50][c + 50];
		}

	}
	else if (a > 20 || b > 20 || c > 20) {
		if (dp[a + 50][b + 50][c + 50] == 0) {
			dp[a + 50][b + 50][c + 50] = w(20, 20, 20);

			return dp[a + 50][b + 50][c + 50];
		}
		else {
			return dp[a + 50][b + 50][c + 50];
		}
	}
	else if (a < b && b < c) {
		if (dp[a + 50][b + 50][c + 50] == 0) {
			dp[a + 50][b + 50][c + 50] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);

			return dp[a + 50][b + 50][c + 50];
		}
		else {
			return dp[a + 50][b + 50][c + 50];
		}
	}
	else {
		if (dp[a + 50][b + 50][c + 50] == 0) {
			dp[a + 50][b + 50][c + 50] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);

			return dp[a + 50][b + 50][c + 50];
		}
		else {
			return dp[a + 50][b + 50][c + 50];
		}
	}
}

int main() {

	int a, b, c;
	cin >> a >> b >> c;

	while (!(a == -1 && b == -1 && c == -1)) {
		cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << "\n";
		cin >> a >> b >> c;
	}
}