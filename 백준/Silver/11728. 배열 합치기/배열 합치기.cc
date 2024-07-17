#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int sizeOfA, sizeOfB;
	cin >> sizeOfA >> sizeOfB;

	vector<int> A(sizeOfA);
	vector<int> B(sizeOfB);

	for (int i = 0; i < sizeOfA; i++) {
		int elementA;
		cin >> elementA;

		A[i] = elementA;
	}

	for (int i = 0; i < sizeOfB;i++) {
		int elementB;
		cin >> elementB;

		B[i] = elementB;
	}

	int sizeOfTotal = sizeOfA + sizeOfB;
	vector<int> total(sizeOfTotal);
	
	for (int a = 0; a < sizeOfA; a++) {
		total[a] = A[a];
	}

	for (int b = 0; b < sizeOfB; b++) {
		total[sizeOfTotal - sizeOfB + b] = B[b];
	}

	sort(total.begin(), total.end());

	for (int i = 0; i < total.size(); i++) {
		cout << total[i] << " ";
	}
}