#include <iostream>
#include <vector>

using namespace std;

int main() {

	int col, row;
	cin >> row >> col;

	vector<vector<int>> Matrix1(row, vector<int>(col, 0));
	vector<vector<int>> Matrix2(row, vector<int>(col, 0));
	vector<vector<int>> resultMatrix(row, vector<int>(col, 0));

	for (int i = 0; i < row;i++) {
		for (int j = 0; j < col; j++) {
			cin >> Matrix1[i][j];
		}
	}

	for (int i = 0; i < row;i++) {
		for (int j = 0; j < col; j++) {
			cin >> Matrix2[i][j];
		}
	}

	for (int i = 0; i < row;i++) {
		for (int j = 0; j < col; j++) {
			resultMatrix[i][j] = Matrix1[i][j] + Matrix2[i][j];
		}
	}

	for (int i = 0; i < row;i++) {
		for (int j = 0; j < col; j++) {
			cout << resultMatrix[i][j] << " ";
		}

		cout << "\n";
	}
}