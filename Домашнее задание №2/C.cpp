#include <iostream>
#include <vector>
#include <cmath>

int main() {
	int N, x;
	std::vector<int> arr;

	std::cin >> N;
	arr.reserve(N);

	for (int i = 0; i < N; ++i) {
		std::cin >> x;
		arr.push_back(x);
	}

	std::cin >> x;

	int near = arr[0];

	for (int i = 1; i < N; ++i) {
		if (std::abs(x - arr[i]) < std::abs(x - near)) {
			near = arr[i];
		}
	}

	std::cout << near;

	return 0;
}