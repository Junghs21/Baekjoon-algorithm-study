#include <iostream>

using namespace std;

int main() {

	double result = 0;
	long long creditTotal = 0;

	for (int i = 0; i < 20;i++) {
		string subjectName, grade;
		float credit;
		float gradeToNum = 0;

		cin >> subjectName >> credit >> grade;


		if (grade != "P") {
			if (grade == "A+") {
				gradeToNum = 4.5;
			}
			else if (grade == "A0") {
				gradeToNum = 4.0;
			}
			else if (grade == "B+") {
				gradeToNum = 3.5;
			}
			else if (grade == "B0") {
				gradeToNum = 3.0;
			}
			else if (grade == "C+") {
				gradeToNum = 2.5;
			}
			else if (grade == "C0") {
				gradeToNum = 2.0;
			}
			else if (grade == "D+") {
				gradeToNum = 1.5;
			}
			else if (grade == "D0") {
				gradeToNum = 1.0;
			}
			else if (grade == "F") {
				gradeToNum = 0.0;
			}

		creditTotal += credit;
		}

		result += (credit * gradeToNum);
	}

	cout << result / creditTotal;
}