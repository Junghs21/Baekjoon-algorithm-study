#include <iostream>

using namespace std;

long long combination(int N, int M) {

	long long result = 1;

	M = (M > N - M) ? N - M : M;

	for (int i = 0; i < M; i++) {
		result *= (N - i);
		result /= (i + 1);
	}

	return result;
}

int main() {

	int numberOfTestcase;
	cin >> numberOfTestcase;

	for (int i = 0; i < numberOfTestcase; i++) {
		int N, M;
		cin >> N >> M;

		long long result;

		if (N > M) {
			result = 0;
		}
		else if (N == 1) {
			result = M;
		}
		else if (N == M) {
			result = 1;
		}
		else if (N < M) {
			result = combination(M, N);
		}

		cout << result << "\n";
	}
}
/*
왼쪽의 다리가 1개
오른쪽 다리가 1, 2, 3, 4, 5, 6
1 2 3 4 5 6

왼쪽의 다리가 2개
오른쪽 1, 2, 3, 4, 5, 6, 7
0 1 3 6

combination사용하면 될 듯
*/