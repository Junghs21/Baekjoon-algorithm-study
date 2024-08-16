#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int numberOfHouse;
	cin >> numberOfHouse;

	vector<int> houses(numberOfHouse);

	for (int i = 0; i < numberOfHouse; i++) {
		cin >> houses[i];
	}

	sort(houses.begin(), houses.end());

	cout << houses[(numberOfHouse - 1) / 2];
}
/*
여러개의 테스트를 넣어본 결과, 다음과 같은 공통점이 나옴.
집에만 안테나를 설치할 수 있음
오름차순으로 정렬한 후
중간 위치에 있는 집을 선택하면 거리가 최소값임
*/