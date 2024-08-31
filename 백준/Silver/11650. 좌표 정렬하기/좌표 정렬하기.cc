#include <iostream>
#include <vector>
#include <algorithm>
//#include <utility>	//pair를 사용하기 위한 라이브러리 -> vector함수에 utility라이브러리가 포함되어 있음

using namespace std;

int main() {

	int numberOfNode;
	cin >> numberOfNode;

	vector<pair<int, int>> nodes(numberOfNode);

	for (int i = 0; i < numberOfNode;i++) {
		int x, y;
		cin >> x >> y;

		nodes[i] = make_pair(x, y);
	}

	sort(nodes.begin(), nodes.end());

	for (int i = 0; i < numberOfNode; i++) {
		cout << nodes[i].first << " " << nodes[i].second << "\n";
	}
}