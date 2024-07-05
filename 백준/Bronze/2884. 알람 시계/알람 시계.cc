#include <iostream>

using namespace std;

int main() {

	int hour, minute;
	cin >> hour >> minute;

	minute -= 45;

	if (minute < 0) {
		minute += 60;
		if (hour == 0) {
			hour = 23;
		}
		else {
			hour -= 1;
		}
	}

	cout << hour << " " << minute;
}