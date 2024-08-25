#include <iostream>
#include <stack>
#include <utility>

using namespace std;

int main() {

	int term;
	cin >> term;

	unsigned long long result = 0;

	stack<pair<int, int>> homeworks;

	while (term > 0) {
		int status;
		cin >> status;

		if (status == 1) {
			int score, needed;
			cin >> score >> needed;

			homeworks.push({ score, needed - 1 });

			if (homeworks.top().second == 0 && !(homeworks.empty())) {
				result += homeworks.top().first;
				homeworks.pop();
			}
		}
		else if (status == 0) {
			if (!homeworks.empty()) {
				homeworks.top().second--;

				if (homeworks.top().second == 0) {
					result += homeworks.top().first;
					homeworks.pop();
				}
			}
		}

		term--;
	}

	cout << result;
}
/*
런타임 에러(segfault)
 stack, queue, dq, pq, ... 등등의 자료구조를 사용할 때는 항상 "대상이 비어있지는 않은가?" 에 대해 조심해야 한다.
 따라서
1. 			if (homeworks.top().second == 0) { 24줄
2. 			if (homeworks.top().second == 0) { 34줄
위 조건들을 모두
if(homeworks.top().second == 0 && !homeworks.empty())로 항상 비어있지 않은지 검사해줘야 한다.
 */