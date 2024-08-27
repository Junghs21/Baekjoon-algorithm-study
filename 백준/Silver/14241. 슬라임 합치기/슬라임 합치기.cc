#include <iostream>
#include <vector>

using namespace std;

int main() {

	int numberOfSlime;
	cin >> numberOfSlime;

	vector<int> slimes(numberOfSlime);
	for (int i = 0; i < numberOfSlime; i++) {
		cin >> slimes[i];
	}

	vector<int> results;

	for (int i = 0; i < numberOfSlime - 1;i++) {
		results.push_back(slimes[i] * slimes[i + 1]);
		slimes[i + 1] += slimes[i];
	}

	int result = 0;
	for (int i = 0; i < results.size();i++) {
		result += results[i];
	}

	cout << result;
}