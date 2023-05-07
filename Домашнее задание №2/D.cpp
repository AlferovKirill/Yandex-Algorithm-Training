#include <iostream>
#include <fstream>

int main() {
	long long left, central, right, curr, count = 0;

	std::fstream file("input.txt");
	std::fstream file_out("output.txt");

	file >> left;

	if (!file) {
		file_out << 0;

		file.close();
		file_out.close();

		return 0;
	}

	file >> central;

	if (!file) {
		file_out << 0;

		file.close();
		file_out.close();

		return 0;
	}

	file >> right;

	if (!file) {
		if (central > left && central > right) file_out << 1;
		else file_out << 0;

		file.close();
		file_out.close();

		return 0;
	}

	while (file) {
		file >> curr;

		if (central > left && central > right) {
			++count;
		}

		left = central;
		central = right;
		right = curr;
	}

	file_out << count;

	file.close();
	file_out.close();

	return 0;
}