#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> attendStudent(30);
	vector<int> absenceStudent;

	for (int i = 0; i < 28; i++) {
		int pos;
		cin >> pos;

		attendStudent[pos - 1] = 1;
	}

	for (int i = 0; i < 30; i++) {
		if (attendStudent[i] != 1) {
			absenceStudent.push_back(i);
		}
	}

	for (int i = 0; i < absenceStudent.size(); i++) {
		cout << absenceStudent[i] + 1 << "\n";
	}
}