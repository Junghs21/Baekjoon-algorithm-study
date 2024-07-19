#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {

	int numberOfTestcase;
	cin >> numberOfTestcase;
	cin.ignore();

	string sentence;
	string word;
	stack<string> s;

	for (int i = 0; i < numberOfTestcase; i++) {
		getline(cin, sentence);

		cout << "Case #" << i + 1 << ": ";

		for (int j = 0; j < sentence.size(); j++) {
			if (sentence[j] != ' ') {
				word += sentence[j];
			}
			else if (sentence[j] == ' ') {
				s.push(word);

				word = "";
			}
		}

		s.push(word);
		word = "";

		while (!s.empty()) {
			cout << s.top() << " ";
			s.pop();
		}

		cout << "\n";
	}
}
/*
if (sentence[j] != ' ' && sentence[sentence.size() - 1])
요기서 sentence[sentence.size() - 1]는 문자가 비어있지 않다면 true로 판단함.
그래서 마지막 원소에 무슨 값이 있던지 간에 true가 되는 것이다.
*/