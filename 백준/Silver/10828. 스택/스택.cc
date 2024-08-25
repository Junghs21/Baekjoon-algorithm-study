#include <iostream>
#include <stack>

using namespace std;

stack<int> s;

void push() {
	int num;
	cin >> num;

	s.push(num);
}

void pop() {
	if (s.empty()) {
		cout << "-1" << "\n";
	}
	else {
		cout << s.top() << "\n";
		s.pop();
	}
}

void size() {
	cout << s.size() << "\n";
}

void empty() {
	if (s.empty()) {
		cout << "1" << "\n";
	}
	else {
		cout << "0" << "\n";
	}
}

void top() {
	if (s.empty()) {
		cout << "-1" << "\n";
	}
	else {
		cout << s.top() << "\n";
	}
}

int main() {

	int count;
	cin >> count;

	while (count > 0) {
		string function;
		cin >> function;

		if (function == "push") {
			push();
		}
		else if (function == "pop") {
			pop();
		}
		else if (function == "size") {
			size();
		}
		else if (function == "empty") {
			empty();
		}
		else if (function == "top") {
			top();
		}

		count--;
	}
}