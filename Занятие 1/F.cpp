#include <iostream>
#include <algorithm>

int main() {
	size_t a1, b1, a2, b2, s1, s2, s3, s4, min;

	std::cin >> a1 >> b1 >> a2 >> b2;

	s1 = (b1 + b2) * std::max(a1, a2);
	s2 = (b1 + a2) * std::max(a1, b2);
	s3 = (a1 + a2) * std::max(b1, b2);
	s4 = (b2 + a1) * std::max(a2, b1);

	min = std::min({ s1, s2, s3, s4 });

	if (min == s1) {
		std::cout << b1 + b2 << " " << std::max(a1, a2);
	}
	else if (min == s2) {
		std::cout << b1 + a2 << " " << std::max(a1, b2);
	}
	else if (min == s3) {
		std::cout << a1 + a2 << " " << std::max(b1, b2);
	}
	else if (min == s4) {
		std::cout << b2 + a1 << " " << std::max(a2, b1);
	}

	return 0;
}