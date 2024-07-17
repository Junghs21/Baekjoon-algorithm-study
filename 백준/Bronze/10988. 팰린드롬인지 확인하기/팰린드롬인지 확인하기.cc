#include <iostream>
#include <vector>

using namespace std;

int main() {

	string word, reverseWord;
	cin >> word;

	int right;
	right = word.size() - 1;

	vector<char> checkWord;

	for (int i = right; i >= 0; i--) {
		checkWord.push_back(word[i]);
	}

	for (int i = 0; i < word.size(); i++) {
		reverseWord += checkWord[i];
	}

	if (reverseWord == word) {
		cout << 1;
	}
	else {
		cout << 0;
	}
}