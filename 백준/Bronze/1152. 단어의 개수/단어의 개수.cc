#include <iostream>
#include <string>

using namespace std;

int main() {

	int result = 1;
	string sentence;
	getline(cin, sentence);		//getline은 string 헤더 파일을 통해서 사용 가능

	for (int i = 0; i < sentence.size(); i++) {
		if (sentence[i] == ' ') {
			result++;
		}
	}

	if (sentence[0] == ' ' || sentence[sentence.size() - 1] == ' ') {
		result--;
	}
	if (sentence[0] == ' ' && sentence[sentence.size() - 1] == ' ') {
		result--;
	}

	cout << result;
}
/*
cin은 문자열을 읽을 때 공백을 구분자로 사용하여 단어 단위로 입력을 받음
getline은 공백을 포함한 전체 입력을 한 줄로 읽음
*/