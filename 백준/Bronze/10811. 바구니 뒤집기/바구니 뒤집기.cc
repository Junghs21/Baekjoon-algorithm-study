#include <iostream>
#include <vector>

using namespace std;

int main() {

	int left, right;
	int numberOfBucket, numberOfTry;
	cin >> numberOfBucket >> numberOfTry;

	vector<int> bucket(numberOfBucket);

	for (int i = 0; i < bucket.size();i++) {
		bucket[i] = i;
	}

	for (int i = 0; i < numberOfTry;i++) {
		cin >> left >> right;

		left -= 1;
		right -= 1;

		for (int j = left; j <= right;j++) {
			int temp;

			temp = bucket[j];
			bucket[j] = bucket[right];
			bucket[right] = temp;

			right--;
		}
	}

	for (int i = 0; i < bucket.size();i++) {
		cout << bucket[i] + 1 << " ";
	}
}