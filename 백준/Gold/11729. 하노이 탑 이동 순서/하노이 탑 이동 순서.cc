#include <iostream>
#include <cmath>

using namespace std;


void hanoi(int n, int start, int sub, int end) {
	if (n == 1) {
		cout << start << " " << end << "\n";
	}
	else {
		hanoi(n - 1, start, end, sub);
		cout << start << " " << end << "\n";

		hanoi(n - 1, sub, start, end);
	}
}

int main() {

	int N;
	cin >> N;

	int count = pow(2, N) - 1;

	cout << count << "\n";

	hanoi(N, 1, 2, 3);
}
/*
cout << pow(2, N) - 1; 로 바로 출력하면
N=20일 때, 지수 표기법으로 표시됨
---- 이유 ----
cmath 헤더의 pow 함수에는 여러 타입의 오버로딩이 존재하는데
현재 코드처럼 int를 파라미터로 주면 int를 double형으로 변환해서 받고 결과도 double형으로 돌려줍니다.
double형 값을 cout으로 내보낼 때의 정밀도(precision)는 유효숫자 6개가 디폴트입니다.
123.0, 1.2300처럼 유효숫자가 6개가 안 되면 123, 1.23처럼 예쁘게 나오지만
6개가 넘어가면 지수표기가 적용됩니다.
이를 해결하려면 말씀하신 것처럼 cout의 정밀도를 직접 늘려주거나
pow 함수의 리턴값을 int 변수에 받으면 됩니다. (int 범위를 넘지 않음이 보장된다면)
*/