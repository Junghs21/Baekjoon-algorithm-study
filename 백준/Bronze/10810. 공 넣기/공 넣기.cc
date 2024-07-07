#include <iostream>
#include <vector>

using namespace std;

int main() {

	int begin, end, ballNumber;
	int numberOfBucket, numberOfTry;
	cin >> numberOfBucket >> numberOfTry;

	vector<int> bucket(numberOfBucket);

	for (int i = 0; i < numberOfTry; i++) {
		cin >> begin >> end >> ballNumber;
		for (int j = begin - 1; j < end; j++) {
			bucket[j] = ballNumber;
		}
	}

	for (int i = 0; i < bucket.size(); i++) {
		cout << bucket[i] << " ";
	}
}