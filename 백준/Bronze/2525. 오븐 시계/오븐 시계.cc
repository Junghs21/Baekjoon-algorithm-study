#include <iostream>

using namespace std;

int main() {

	int hour, minute, cookingTime;
	cin >> hour >> minute >> cookingTime;

	minute += cookingTime;

	if (minute >= 60) {
		int upHour;
		upHour = (minute / 60);

		minute = (minute % 60);
		hour += upHour;
		if (hour >= 24) {
			hour = (hour % 24);
		}
	}

	cout << hour << " " << minute;
}