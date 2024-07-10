#include <iostream>
#include <string>

using namespace std;

int main() {

	string word;
	int pos;
	cin >> word >> pos;

	cout << word[pos - 1];
}