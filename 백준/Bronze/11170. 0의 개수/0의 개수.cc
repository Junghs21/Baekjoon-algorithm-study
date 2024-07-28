#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	int numberOfTestcase;
	cin >> numberOfTestcase;

	for (int i = 0; i < numberOfTestcase; i++) {

		int result = 0;

		vector<string> numbers(numberOfTestcase);

		int N, M;
		cin >> N >> M;

		for (int j = N; j <= M; j++) {
			string intToString = "";
			intToString	+= to_string(j);
			numbers[i] += intToString;
		}

		for (int k = 0; k < numbers[i].size(); k++) {
			if (numbers[i][k] == '0') {
				result++;
			}
		}

		cout << result << "\n";
	}
}