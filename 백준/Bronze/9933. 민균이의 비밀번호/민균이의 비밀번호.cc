#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	int numberOfWord;
	cin >> numberOfWord;

	vector<string> words;

	for (int i = 0; i < numberOfWord; i++) {
		string word;
		cin >> word;

		words.push_back(word);
	}

	string result;

	for (int i = 0; i < words.size(); i++) {
		string checkWord = words[i];
		int right = words[i].length() - 1;

		string reverseCheckWord;

		for (int j = right; j >= 0;j--) {
			reverseCheckWord += checkWord[j];
		}


		for (int j = 0; j < words.size(); j++) {
			if (reverseCheckWord == words[j]) {
				result = words[j];
			}
		}
	}

	cout << result.length() << " " << result[result.length() / 2];
}