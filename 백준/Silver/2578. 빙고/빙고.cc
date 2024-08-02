#include <iostream>

using namespace std;

int main() {

	int Matrix[5][5];
	bool check[5][5] = { false };

	int bingo = 0;
	int value;
	int count = 0;
	int checkLine = 0;

	for (int i = 0;i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> Matrix[i][j];
		}
	}

	while (bingo < 3) {
		bingo = 0;

		cin >> value;
		count++;

		for (int i = 0; i < 5;i++) {
			for (int j = 0; j < 5;j++) {
				if (Matrix[i][j] == value) {
					check[i][j] = true;
				}
			}
		}

		//행 빙고 찾기		
		for (int i = 0; i < 5; i++) {
			checkLine = 0;

			for (int j = 0; j < 5; j++) {
				if ((check[i][j])) {
					checkLine++;

					if (checkLine == 5) {
						bingo++;
					}
				}
			}
		}

		//열 빙고찾기
		for (int i = 0; i < 5; i++) {
		checkLine = 0;

			for (int j = 0; j < 5; j++) {
				if ((check[j][i])) {
					checkLine++;

					if (checkLine == 5) {
						bingo++;
					}
				}
			}
		}

		//대각선 빙고 찾기
		checkLine = 0;
		for (int i = 0; i < 5; i++) {
			if (check[i][i] == true) {
				checkLine++;

				if (checkLine == 5) {
					bingo++;
				}
			}
		}

		//반대 대각선 빙고 찾기 
		checkLine = 0;
		for (int i = 0; i < 5;i++) {
			if (check[4 - i][i] == true) {
				checkLine++;

				if (checkLine == 5) {
					bingo++;
				}
			}
		}
	}

	cout << count;
}
/*
트라이 횟수 넣어서 5가 되면 빙고로 등록하면 될듯
check를 false로 바꾸니 중첩된 곳에서 빙고가 나오면 탐색 못하는 경우가 생김
*/