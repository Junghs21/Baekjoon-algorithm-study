#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

	string word;
	cin >> word;

	vector<int> result(26, -1);

	for (int i = word.size() - 1; i >= 0; i--) {
		result[word[i] - 97] = i;
	}

	for (int i = 0; i < result.size();i++) {
		cout << result[i] << " ";
	}
}
/*
소문자a를 int로 변환한 값은 97
*/