#include <iostream>
#include <vector>

using namespace std;

int main() {

	double maxValue = 0;
	double result = 0;

	int numberOfGrade;
	cin >> numberOfGrade;

	vector<double> grades(numberOfGrade);
	vector<double> newGrades(numberOfGrade);

	for (int i = 0; i < numberOfGrade; i++) {
		cin >> grades[i];
	}

	for (int i = 0; i < grades.size(); i++) {
		maxValue = max(maxValue, grades[i]);
	}

	for (int i = 0; i < grades.size(); i++) {
		newGrades[i] = (grades[i] / maxValue) * 100;
	}

	for (int i = 0; i < newGrades.size(); i++) {
		result += newGrades[i];
	}

	result /= numberOfGrade;

	cout << result;
}