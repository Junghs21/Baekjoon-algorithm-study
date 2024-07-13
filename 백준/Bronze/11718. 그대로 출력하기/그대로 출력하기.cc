#include <iostream>
#include <string>

using namespace std;

int main() {

	string sentence;

	while (true) {
		getline(cin, sentence);

		if (cin.eof()) {
			break;
		}
		else {
			cout << sentence << "\n";
		}
	}
}