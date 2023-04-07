#include <iostream>

int main() {
	long long A, B, C, D, E;

	std::cin >> A >> B >> C >> D >> E;

	if (A <= 0 || B <= 0 || C <= 0 || E <= 0 || D <= 0) {
		std::cout << "NO";
	}
	else if (((E >= A) && (D >= B)) || ((E >= B) && (D >= A))) {
		std::cout << "YES";
	}
	else if (((E >= A) && (D >= C)) || ((E >= C) && (D >= A))) {
		std::cout << "YES";
	}
	else if (((E >= B) && (D >= C)) || ((E >= C) && (D >= B))) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}

	return 0;
}