#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {

	int numberOfTestCase;
	cin >> numberOfTestCase;

	for (int i = 0; i < numberOfTestCase;i++) {
		string ps;
		cin >> ps;

		stack<char> s;

		for (int i = 0; i < ps.size(); i++) {

			if (ps[i] == '(') {
				s.push(ps[i]);
			}
			else if (ps[i] == ')') {
				if (!(s.empty())) {
					if (s.top() == '(') {
						s.pop();
					}
				}
				else {
					s.push(ps[i]);
				}
			}
		}

		if (s.empty()) {
			cout << "YES" << "\n";
		}
		else {
			cout << "NO" << "\n";
		}
	}
}