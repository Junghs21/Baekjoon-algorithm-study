#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int countBlue = 0;
	int countRed = 0;

	int numberOfProblem;
	cin >> numberOfProblem;

	vector<char> color(numberOfProblem);
	vector<int> result;

	for (int i = 0; i < color.size(); i++) {
		cin >> color[i];
	}

	//전체가 한 가지의 색인 경우
	if (countBlue == color.size() || countRed == color.size()) {
		cout << 1;

		return 0;
	}

	//바탕을 파란색으로 칠하는 경우
	if (true) {

		vector<bool> check(numberOfProblem, false);

		countBlue = 1;
		countRed = 0;

		for (int i = 0; i < color.size(); i++) {
			if (color[i] == 'R' && !(check[i])) {

				int j = i;

				while (j < color.size() && color[i] == color[j]) {
					check[j] = true;
					j++;
				}

				countRed++;
			}
		}

		result.push_back(countBlue + countRed);
	}

	//바탕을 빨간색으로 칠하는 경우
	if (true) {

		vector<bool> check(numberOfProblem, false);

		countBlue = 0;
		countRed = 1;

		for (int i = 0; i < color.size(); i++) {
			if (color[i] == 'B' && !(check[i])) {

				int j = i;

				while (j < color.size() && color[i] == color[j]) {
					check[j] = true;
					j++;
				}

				countBlue++;
			}
		}

		result.push_back(countBlue + countRed);
	}

	sort(result.begin(), result.end());

	cout << result[0];
}