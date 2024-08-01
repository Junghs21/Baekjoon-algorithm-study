#include <iostream>
#include <string>

using namespace std;

int main() {

	string word;
	cin >> word;

	int result = 0;
	int i = 0;
	bool visitedFinalWord = false;

	while (!(visitedFinalWord)) {
		if (word[i] == 'c') {
			if (word[i + 1] == '=') {
				result++;
				i += 2;
			}
			else if (word[i + 1] == '-') {
				result++;
				i += 2;
			}
			else {
				result++;
				i += 1;
			}
		}
		else if (word[i] == 'd') {
			if (word[i + 1] == 'z' && word[i + 2] == '=') {
				result++;
				i += 3;
			}
			else if (word[i + 1] == '-') {
				result++;
				i += 2;
			}
			else {
				result++;
				i += 1;
			}
		}
		else if (word[i] == 'l') {
			if (word[i + 1] == 'j') {
				result++;
				i += 2;
			}
			else {
				result++;
				i += 1;
			}
		}
		else if (word[i] == 'n') {
			if (word[i + 1] == 'j') {
				result++;
				i += 2;
			}
			else {
				result++;
				i += 1;
			}
		}
		else if (word[i] == 's' || word[i] == 'z') {
			if (word[i + 1] == '=') {
				result++;
				i += 2;
			}
			else {
				result++;
				i += 1;
			}
		}
		else {
			result++;
			i += 1;
		}

		if (i >= word.size()) {
			visitedFinalWord = true;
		}
	}

	cout << result;
}