#include <iostream>
#include <vector>

using namespace std;

int main() {

	int numberOfFile;
	cin >> numberOfFile;

	vector<string> fileName(numberOfFile);

	for (int i = 0; i < numberOfFile; i++) {
		cin >> fileName[i];
	}

	string result = fileName[0];

	for (int i = 1; i < fileName.size(); i++) {
		for (int j = 0; j < result.size(); j++) {
			if (result[j] != fileName[i][j]) {
				result[j] = '?';
			}
		}
	}

	cout << result;
}