#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

	int result = 0;
	vector<int> pos(8);
	string word;
	cin >> word;

	for (int i = 0; i < word.size(); i++) {
		if (word[i] == 'S') {
			pos[5]++;
		}
		else if (word[i] == 'V') {
			pos[6]++;
		}
		else if (word[i] == 'Y' || word[i] == 'Z') {
			pos[7]++;
		}
		else {
			pos[(word[i] - 65) / 3]++;
		}
	}

	for (int i = 0; i < 8; i++) {
		result += pos[i] * (3 + i);
	}

	cout << result;
}
/*
A의 아스키 코드는 65
*/