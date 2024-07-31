#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

	int pos[26] = { 0 };
	int index = -1;

	string word;
	cin >> word;

	for (int i = 0; i < word.size(); i++) {
		if (word[i] >= 97 && word[i] <= 122) {
			pos[word[i] - 97]++;
		}
		else if (word[i] >= 65 && word[i] <= 90) {
			pos[word[i] - 65]++;
		}
	}

	int maxValue = pos[0];

	for (int i = 1; i < 26; i++) {
		maxValue = max(maxValue, pos[i]);
	}

	for (int i = 0; i < 26; i++) {
		if (maxValue == pos[i]) {
			index = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		if ((maxValue == pos[i]) && (index != i)) {
			cout << "?";

			return 0;
		}
	}

	cout << static_cast<char>(index + 65);
}
/*
a의 아스키 코드 값은 97, z의 아스키 코드 값은 122
A의 아스키 코드 값은 65, Z의 아스키 코드 값은 90
*/