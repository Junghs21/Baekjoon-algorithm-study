#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int N;
	cin >> N;

	vector<int> arr(N);

	for (int i = 0; i < N; i++) {
		arr[i] = i + 1;
	}

	if (N == 1) {
		cout << arr[0];
	}
	else {
		while (arr[1] != 101) {
			for (int i = 0; i < arr.size(); i++) {
				if (i % 2 == 0) {
					arr[i] = 101;
				}
			}

			sort(arr.begin(), arr.end());
		}

		cout << arr[0];
	}	
}