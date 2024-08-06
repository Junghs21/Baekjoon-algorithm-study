#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int numberOfsanggeunCard;
	cin >> numberOfsanggeunCard;

	vector<int> sanggeunCard(numberOfsanggeunCard);

	for (int i = 0; i < numberOfsanggeunCard; i++) {
		cin >> sanggeunCard[i];
	}

	sort(sanggeunCard.begin(), sanggeunCard.end());

	int numberOfCard;
	cin >> numberOfCard;

	vector<int> CardNums(numberOfCard);

	for (int i = 0; i < numberOfCard;i++) {
		cin >> CardNums[i];
	}

	vector<bool> result(numberOfCard, false);


	for (int i = 0; i < numberOfCard;i++) {

		int left = 0;
		int right = sanggeunCard.size() - 1;		

		while ((left <= right) && !(result[i])) {
			//int mid = left + (right - left) / 2;
			int mid = (left + right) / 2;

			if (CardNums[i] == sanggeunCard[mid]) {
				result[i] = true;
			}
			else if (sanggeunCard[mid] < CardNums[i]) {
				left = mid + 1;
			}
			else {
				right = mid - 1;
			}
		}
	}

	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}
}