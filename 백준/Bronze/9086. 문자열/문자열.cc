#include <iostream>
#include <string>

using namespace std;

int main() {

	string word;
	int numberOfTestcase;
	cin >> numberOfTestcase;

	for (int i = 0; i < numberOfTestcase; i++) {
		cin >> word;

		int endOfWord;
		endOfWord = word.size();

		cout << word[0] << word[endOfWord - 1] << "\n";
	}
}