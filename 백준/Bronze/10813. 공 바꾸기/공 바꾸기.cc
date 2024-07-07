#include <iostream>
#include <vector>

using namespace std;

int main() {

	int left, right;
	int numberOfBucket, numberOfTry;
	cin >> numberOfBucket >> numberOfTry;

	vector<int> bucket(numberOfBucket);

	for (int i = 0; i < bucket.size(); i++) {
		bucket[i] = i;
	}

	for (int i = 0; i < numberOfTry;i++) {
		cin >> left >> right;

		int temp;
		temp = bucket[left - 1];
		bucket[left - 1] = bucket[right - 1];
		bucket[right - 1] = temp;
	}

	for (int i = 0; i < bucket.size(); i++) {
		cout << bucket[i] + 1 << " ";
	}
}