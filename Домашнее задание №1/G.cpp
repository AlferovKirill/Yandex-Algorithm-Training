#include <iostream>

int main() {
	size_t N, K, M, rest = 0, k = 0, answer = 0;

	std::cin >> N >> K >> M;

	while (N >= K && K >= M) {
		rest = N % K;
		k = N / K;

		answer += k * (K / M);
		rest += k * (K % M);

		N = rest;
	}

	std::cout << answer;
	
	return 0;
}