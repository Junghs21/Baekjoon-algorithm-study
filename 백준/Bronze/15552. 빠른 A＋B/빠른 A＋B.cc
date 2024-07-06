#include <iostream>

using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int numberOfTestcase;
	cin >> numberOfTestcase;

	for (int i = 0; i < numberOfTestcase; i++) {
		int A, B;
		cin >> A >> B;

		cout << A + B << "\n";
	}
}
//Note!
/*
	C++
cin.tie(NULL);
ios_base::sync_with_stdio(false);
두 개의 문장을 사용해서 입출력을 더욱 빠르게 처리할 수 있다.
endl 보다 개행 문자(\n)을 사용하자.
*/
/*
	Java
Scanner와 System.out.printIn 대신 BufferedReader와 BufferedWriter를 사용하자.
BufferedWriter.flush는 맨 마지막에 한 번만 사용하면 된다.
*/
/*
	Python
input대신 sys.stdin.readline을 사용할 수 있다.
단, 맨 끝의 개행 문자가지 같이 입력받기 때문에
문자열을 저장하고 싶은 경우 .rstrip()을 추가해주자.
*/