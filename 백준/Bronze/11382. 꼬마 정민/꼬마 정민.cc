#include <iostream>

using namespace std;

int main() {

	long A, B, C;	//최대 입력 값이 10^12이므로 int형으로 선언하면 오버플로우 발생
	cin >> A >> B >> C;

	cout << A + B + C;
}