#include <iostream>
#include <string>

using namespace std;

int main() {

	int english[26] = { 0 };
	int maxvalue = -1;
	int index = -1;

	string sentence;

	int numberOfTestcase;
	cin >> numberOfTestcase;
	cin.ignore();

	for (int i = 0; i < numberOfTestcase; i++) {
		getline(cin, sentence);

		for (int j = 0; j < sentence.size(); j++) {
			if (97 <= sentence[j] && sentence[j] <= 122) {
				english[sentence[j] - 97]++;
			}
		}

		for (int k = 0; k < 26; k++) {
			if (english[k] > maxvalue) {
				maxvalue = english[k];
				index = k;
			}
		}

		for (int m = 0; m < 26; m++) {
			if ((english[m] == maxvalue) && (m != index)) {
				index = -2;
			}
		}

		if (index == -2) {
			cout << "?" << "\n";
		}
		else {
			cout << static_cast<char>(index + 97) << "\n";
		}

		//리셋
		for (int h = 0; h < 26; h++) {
			english[h] = 0;
		}

		maxvalue = -1;
		index = -1;
	}
}
/*
a는 97
z는 122
*/