#include <iostream>
#include <string>

using namespace std;

int main() {

	int numberOfTestcase;
	cin >> numberOfTestcase;

	int repeat;
	string word;
	string result;

	for (int i = 0; i < numberOfTestcase; i++) {
		cin >> repeat >> word;

		for (int j = 0; j < word.size(); j++) {
			for (int k = 0; k < repeat; k++) {
				cout << word[j];
			}
		}

		cout << "\n";
	}
}