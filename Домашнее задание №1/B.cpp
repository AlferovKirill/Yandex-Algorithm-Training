#include <iostream>

int main()
{
	uint64_t a, b, c;
	bool answer = true;

	std::cin >> a >> b >> c;

	if (a + b <= c) {
		answer = false;
	}
	else if (a + c <= b) {
		answer = false;
	}
	else if (b + c <= a) {
		answer = false;
	}

	std::cout << (answer ? "YES" : "NO");

	return 0;
}