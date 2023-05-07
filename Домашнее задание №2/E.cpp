#include <iostream>
#include <vector>

int main() {
	std::vector<uint16_t> arr;
	size_t n, temp, place = 0, first = 0, second = 0, third = 0, player = 0;
	bool was_winner = false;

	std::cin >> n;
	arr.reserve(n);

	for (size_t i = 0; i < n; ++i) {
		std::cin >> temp;
		arr.push_back(temp);

		if (arr[i] > third) third = arr[i];
		if (arr[i] > second) second = arr[i];
		if (arr[i] > first) first = arr[i];
	}

	for (size_t i = 0; i < n; ++i) {
		if (i + 1 != n && arr[i] % 10 == 5 && arr[i + 1] < arr[i] && was_winner) {
			if (player == 0) player = arr[i];
			else if (player < arr[i]) player = arr[i];
		}

		if (arr[i] == first || arr[i] == second || arr[i] == third) was_winner = true;
	}

	if (player == 0) {
		std::cout << 0;
		return 0;
	}

	for (size_t i = 0; i < n; ++i) {
		if (arr[i] > player) ++place;
	}

	std::cout << place + 1;
}