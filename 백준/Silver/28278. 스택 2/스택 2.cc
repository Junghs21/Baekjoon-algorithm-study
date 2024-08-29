#include <iostream>
#include <stack>

using namespace std;

int main() {

	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	stack<int> s;

	while (N != 0) {
		int command;
		cin >> command;

		if (command == 1) {
			int X;
			cin >> X;

			s.push(X);
		}
		else if (command == 2) {
			if (!(s.empty())) {
				cout << s.top() << "\n";
				s.pop();
			}
			else {
				cout << "-1" << "\n";
			}
		}
		else if (command == 3) {
			cout << s.size() << "\n";
		}
		else if (command == 4) {
			if (s.empty()) {
				cout << "1" << "\n";
			}
			else {
				cout << "0" << "\n";
			}
		}
		else if (command == 5) {
			if (!(s.empty())) {
				cout << s.top() << "\n";
			}
			else {
				cout << "-1" << "\n";
			}
		}

		N--;
	}
}