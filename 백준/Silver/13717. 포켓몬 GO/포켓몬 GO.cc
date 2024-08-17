#include <iostream>
#include <vector>

using namespace std;

int main() {

	int numberOfPokemon;
	cin >> numberOfPokemon;

	vector<string> pokemons;
	vector<int> neededCandies;
	vector<int> haveCandies;

	for (int i = 0; i < numberOfPokemon; i++) {
		string name;
		int neededCandy, haveCandy;
		cin >> name >> neededCandy >> haveCandy;

		pokemons.push_back(name);
		neededCandies.push_back(neededCandy);
		haveCandies.push_back(haveCandy);
	}

	vector<int> result(numberOfPokemon);
	int totalCount = 0;

	for (int i = 0; i < numberOfPokemon; i++) {
		while (haveCandies[i] - neededCandies[i] >= 0) {
			haveCandies[i] -= neededCandies[i];
			haveCandies[i] += 2;

			result[i]++;
			totalCount++;
		}
	}

	int maxValue = result[0];
	int pos = 0;

	if (numberOfPokemon > 2) {
		for (int i = 1; i < numberOfPokemon; i++) {
			if (maxValue < result[i]) {
				maxValue = result[i];
				pos = i;
			}
		}
	}

	cout << totalCount << "\n" << pokemons[pos];
}