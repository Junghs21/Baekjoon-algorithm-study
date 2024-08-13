#include <iostream>
#include <string>

using namespace std;

int main() {

	long long len;
	cin >> len;

	string sentence;
	cin >> sentence;

	long long result = 0;

	for (int i = 0; i < len; i++) {
		string temp = "";

		while ('0' <= sentence[i] && sentence[i] <= '9') {
			temp += sentence[i];
			i++;
		}

		if (temp != "" ) {
			int num;
			num = stoi(temp);

			result += num;
		}
	}

	cout << result;
}
/*
stoi는 string을 int로 변환해주는 string 라이브러리 함수
*/