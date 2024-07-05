#include <iostream>

using namespace std;

int main() {

	int money;
	int dice1, dice2, dice3;
	cin >> dice1 >> dice2 >> dice3;

	if ((dice1 == dice2) && (dice1 == dice3) && (dice2 == dice3)) {
		money = 10000 + dice1 * 1000;
		cout << money;
	}
	else if ((dice1 == dice2) || (dice1 == dice3) || (dice2 == dice3)) {
		if (dice1 == dice2) {
			money = 1000 + dice1 * 100;
			cout << money;
		}
		else {
			money = 1000 + dice3 * 100;
			cout << money;
		}
	}
	else {
		money = max(dice1, max(dice2, dice3)) * 100;
		cout << money;
	}
}