#include <iostream>

using namespace std;

int main() {

	int A, B;

	while (true)
	{
		cin >> A >> B;

		if (cin.eof()) {
			break;
		}
		else {
			cout << A + B << "\n";
		}
	}
}
/*
eof()는 End of File의 약자
파일의 끝이 맞는 경우 true
파일의 끝이 아닌 경우에는 false를 반환
Note: 파일의 끝에서 판단하여 반환하는 것이 아닌 파일의 끝 다음에 읽을 수 있는 데이터가 없는 경우에 반환하는 것
*/
