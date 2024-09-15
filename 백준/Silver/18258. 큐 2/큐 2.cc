#include <iostream>
#include <queue>

using namespace std;

queue<int> q;

void push(int x) {
	q.push(x);
}

void pop() {
	if (!(q.empty())) {
		int val = q.front();
		q.pop();

		cout << val << "\n";
	}
	else {
		cout << "-1" << "\n";
	}
}

void size() {
	cout << q.size() << "\n";
}

void empty() {
	if (!(q.empty())) {
		cout << "0" << "\n";
	}
	else {
		cout << "1" << "\n";
	}
}

void front() {
	if (!(q.empty())) {
		cout << q.front() << "\n";
	}
	else {
		cout << "-1" << "\n";
	}
}

void back() {
	if (!(q.empty())) {
		cout << q.back() << "\n";
	}
	else {
		cout << "-1" << "\n";
	}
}

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);

	int count;
	cin >> count;

	while (count > 0) {
		string function;
		cin >> function;

		if (function == "push") {
			int num;
			cin >> num;

			push(num);
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
		else if (function == "front") {
			front();
		}
		else if (function == "back") {
			back();
		}

		count--;
	}
}