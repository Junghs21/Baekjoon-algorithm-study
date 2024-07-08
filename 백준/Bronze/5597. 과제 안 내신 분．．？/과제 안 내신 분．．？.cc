//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//
//	vector<int> attendStudent(28);
//	vector<int> absenceStudent;
//
//	for (int i = 0; i < 28;i++) {
//		cin >> attendStudent[i];
//	}
//
//	sort(attendStudent.begin(), attendStudent.end());
//
//	for (int j = 0; j < attendStudent.size() - 1;j++) {
//		if (attendStudent[j] != attendStudent[j + 1] - 1) {
//			absenceStudent.push_back(attendStudent[j + 1] - 1);
//		}
//	}
//
//	sort(absenceStudent.begin(), absenceStudent.end());
//
//	for (int i = 0; i < absenceStudent.size(); i++) {
//		cout << absenceStudent[i] << "\n";
//	}
//}

#include <iostream>
#include <vector>
#include <algorithm>

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