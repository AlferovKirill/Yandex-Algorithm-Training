#include <iostream>

int main() {
	bool CONSTANT = true, ASCENDING = true, DESCENDING = true, WEAKLY_ASCENDING = true, WEAKLY_DESCENDING = true;
	long long curr, prev;

	std::cin >> prev >> curr;

	while (curr != -2000000000) {
		if (curr == prev) {
			ASCENDING = false;
			DESCENDING = false;
		}
		else if (curr > prev) {
			CONSTANT = false;
			DESCENDING = false;
			WEAKLY_DESCENDING = false;
		}
		else if (curr < prev) {
			CONSTANT = false;
			ASCENDING = false;
			WEAKLY_ASCENDING = false;
		}

		prev = curr;
		std::cin >> curr;
	}

	if (CONSTANT) {
		std::cout << "CONSTANT";
	}
	else if (ASCENDING) {
		std::cout << "ASCENDING";
	}
	else if (DESCENDING) {
		std::cout << "DESCENDING";
	}
	else if (WEAKLY_ASCENDING) {
		std::cout << "WEAKLY ASCENDING";
	}
	else if (WEAKLY_DESCENDING) {
		std::cout << "WEAKLY DESCENDING";
	}
	else {
		std::cout << "RANDOM";
	}

	return 0;
}