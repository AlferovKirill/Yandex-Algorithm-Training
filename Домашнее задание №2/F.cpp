#include <iostream>
#include <algorithm>
#include <vector>

bool is_simmetric(std::vector<int>& arr) {
	std::vector<int> r_arr = arr;
	std::reverse(r_arr.begin(), r_arr.end());

	if (arr == r_arr) return true;

	return false;
}

void search_add_to_sym(std::vector<int>& arr, size_t N) {
	std::vector<int> add_to_sym, sym_arr;

	sym_arr = arr;

	add_to_sym.reserve(N);
	sym_arr.reserve(2 * N);

	for (size_t i = 0; i <= N; ++i) {
		std::reverse_copy(arr.begin(), arr.begin() + i, std::back_inserter(add_to_sym));
		std::copy(add_to_sym.begin(), add_to_sym.end(), std::back_inserter(sym_arr));

		if (is_simmetric(sym_arr)) break;

		add_to_sym.clear();
		sym_arr.clear();

		std::copy(arr.begin(), arr.end(), std::back_inserter(sym_arr));
	}

	std::cout << add_to_sym.size() << std::endl;

	for (size_t j = 0; j < add_to_sym.size(); ++j) {
		std::cout << add_to_sym[j] << " ";
	}
}

int main() {
	std::vector<int> arr;
	size_t N;
	int temp;

	std::cin >> N;
	arr.reserve(N);

	for (size_t i = 0; i < N; ++i) {
		std::cin >> temp;
		arr.push_back(temp);
	}

	search_add_to_sym(arr, N);
}