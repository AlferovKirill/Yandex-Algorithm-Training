#include <iostream>

int main() {
	int a, b, n, m, min, max;
	int f1, f2, f3;
	int s1, s2, s3;

	std::cin >> a >> b >> n >> m;

	f1 = (a + 1) * n - a;
	f2 = (a + 1) * n;
	f3 = (a + 1) * n + a;

	s1 = (b + 1) * m - b;
	s2 = (b + 1) * m;
	s3 = (b + 1) * m + b;

	if (f1 == s1) {
		min = f1;
	}
	else if (f1 < s1 && s1 <= f3) {
		min = s1;
	}
	else if (s1 < f1 && f1 <= s3) {
		min = f1;
	}
	else {
		min = -1;
	}

	if (f3 == s3) {
		max = f3;
	}
	else if (f3 > s3 && s3 >= f1) {
		max = s3;
	}
	else if (s3 > f3 && f3 >= s1) {
		max = f3;
	}
	else {
		max = -1;
	}

	if (max == -1 || min == -1) {
		std::cout << -1;
	}
	else {
		std::cout << min << " " << max;
	}

	return 0;
}