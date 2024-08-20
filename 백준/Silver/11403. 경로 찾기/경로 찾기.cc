#include <iostream>
#include <vector>

using namespace std;

int main() {

	int numberOfEdge;
	cin >> numberOfEdge;

	vector<vector<int>> adjacencyMatrix(numberOfEdge, vector<int>(numberOfEdge, 0));

	for (int i = 0; i < numberOfEdge;i++) {
		for (int j = 0; j < numberOfEdge;j++) {
			cin >> adjacencyMatrix[i][j];
		}
	}

	for (int k = 0; k < numberOfEdge;k++) {
		for (int i = 0; i < numberOfEdge;i++) {
			for (int j = 0; j < numberOfEdge;j++) {
				if (adjacencyMatrix[i][k] && adjacencyMatrix[k][j]) {
					adjacencyMatrix[i][j] = 1;
				}
			}
		}
	}

	for (int i = 0; i < numberOfEdge;i++) {
		for (int j = 0; j < numberOfEdge;j++) {
			cout << adjacencyMatrix[i][j] << " ";
		}
		cout << "\n";
	}
}
/*
양방향으로 이동 가능한 조건은
if (adjacencyMatrix[i][k] == adjacencyMatrix[k][j])이 아니고
if (adjacencyMatrix[i][k] && adjacencyMatrix[k][j])이다.
위에 조건문처럼 사용하면 서로 0(길이 없음)이 되어도 결과가 1이 나옴
*/