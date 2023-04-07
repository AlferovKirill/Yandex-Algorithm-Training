#include <iostream>

int main() {
	double a, b, c, d, e, f, x, y;

	std::cin >> a >> b >> c >> d >> e >> f;

	if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0) {
		std::cout << 5;
	}
	else if ((a * d == b * c) && (a * f != c * e)) {
		std::cout << 0;
	}
	else if (a == 0 && b == 0 && e != 0) {
		std::cout << 0;
	}
	else if (c == 0 && d == 0 && f != 0) {
		std::cout << 0;
	}
	else if (a == 0 && c == 0 && b * f != d * e) {
		std::cout << 0;
	}
	else if (b == 0 && d == 0 && a * f != c * e) {
		std::cout << 0;
	}
	else if (a * d == b * c && a * f == c * e) {
		if (b == 0 && d == 0) {
			if (a != 0 && c != 0) {
				std::cout << 3 << " " << e / a;
			}
			else if (a == 0) {
				if (e == 0) {
					std::cout << 3 << " " << f / c;
				}
			}
			else if (c == 0) {
				if (f == 0) {
					std::cout << 3 << " " << e / a;
				}
			}
		}
		else if (a == 0 && c == 0) {
			if (b != 0) {
				std::cout << 4 << " " << e / b;
			}
			else if (d != 0) {
				std::cout << 4 << " " << f / d;
			}
		}
		else if (b != 0) {
			std::cout << 1 << " " << (-a / b) << " " << (e / b);
		}
		else if (d != 0) {
			std::cout << 1 << " " << (-c / d) << " " << (f / d);
		}
	}
	else {
		x = (e * d - b * f) / (a * d - b * c);
		y = (a * f - e * c) / (a * d - b * c);
		std::cout << 2 << " " << x << " " << y;
	}

	return 0;
}