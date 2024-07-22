#include <iostream>
#include <vector>

using namespace std;

int main() {

	int count = 0;

	int N, M;
	cin >> N >> M;

	vector<int> arr(N);

	for (int i = 0; i < N;i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] == M) {
			count++;
		}
	}

	for (int i = 0; i < N;i++) {
		int result;
		result = arr[i];

		for (int j = i + 1; j < N ; j++) {
			result += arr[j];

			if (result > M) {
				break;
			}
			else if (result == M) {
				count++;

				break;
			}
		}
	}

	cout << count;
}