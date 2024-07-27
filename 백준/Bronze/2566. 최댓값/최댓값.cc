#include <iostream>
#include <vector>

using namespace std;

int main() {

	int result = -1;
	int row, col;

	vector<vector<int>> Matrix(9, vector<int>(9, 0));

	for (int i = 0; i < 9;i++) {
		for (int j = 0; j < 9;j++) {
			cin >> Matrix[i][j];
		}
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (Matrix[i][j] > result) {
				result = Matrix[i][j];
				row = (i + 1);
				col = (j + 1);
			}
		}
	}

	cout << result << "\n";
	cout << row << " " << col;
}