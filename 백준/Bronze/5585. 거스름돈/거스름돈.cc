#include <iostream>
#include <vector>

using namespace std;

int main() {

	int result = 0;

	int payMoney;
	cin >> payMoney;

	int charge = (1000 - payMoney);

	while (charge != 0){
		if (charge >= 500) {
			charge -= 500;

			result++;
		}
		else if (100 <= charge && charge < 500) {
			charge -= 100;

			result++;
		}
		else if (50 <= charge && charge < 100) {
			charge -= 50;

			result++;
		}
		else if (10 <= charge && charge < 50) {
			charge -= 10;

			result++;
		}
		else if (5 <= charge && charge < 10) {
			charge -= 5;

			result++;
		}
		else if (charge < 5) {
			charge -= 1;

			result++;
		}
	}

	cout << result;
}