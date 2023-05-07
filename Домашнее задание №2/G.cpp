#include <iostream>
#include <fstream>

int main() {
	std::fstream file("input.txt");
	std::fstream file_out("output.txt");

	long long int max_1 = 0, max_2 = 0, min_1 = 0, min_2 = 0, curr = 0;

	file >> max_1 >> max_2;

	if (max_1 < max_2) {
		curr = max_2;
		max_2 = max_1;
		max_1 = curr;
	}

	if (!file) {
		file_out << max_2 << " " << max_1;

		file.close();
		file_out.close();

		return 0;
	}

	file >> min_1;

	if (min_1 >= max_1) {
		curr = max_1;
		max_1 = min_1;

		min_2 = max_2;
		max_2 = curr;
		min_1 = min_2;
	}
	else if (min_1 > max_2) {
		curr = max_2;
		max_2 = min_1;
		min_1 = curr;
	}

	if (!file) {
		if (min_1 * max_2 < max_1 * max_2) file_out << max_2 << " " << max_1;
		else file_out << min_1 << " " << max_1;

		file.close();
		file_out.close();

		return 0;
	}

	file >> min_2;

	if (min_2 >= max_1) {
		curr = max_1;
		max_1 = min_2;

		min_2 = min_1;
		min_1 = max_2;
		max_2 = curr;
	}
	else if (min_2 >= max_2) {
		curr = max_2;
		max_2 = min_2;

		min_2 = min_1;
		min_1 = curr;
	}
	else if (min_2 > min_1) {
		curr = min_1;
		min_1 = min_2;

		min_2 = curr;
	}

	if (!file) {
		if (min_2 * min_1 < max_1 * max_2) file_out << max_2 << " " << max_1;
		else file_out << min_2 << " " << min_1;

		file.close();
		file_out.close();

		return 0;
	}

	file >> curr;

	while (file) {
		if (curr > max_1) {
			max_2 = max_1;
			max_1 = curr;
		}
		else if (curr > max_2 && curr <= max_1) {
			max_2 = curr;
		}
		else if (curr < min_2) {
			min_1 = min_2;
			min_2 = curr;
		}
		else if (curr < min_1 && curr >= min_2) {
			min_1 = curr;
		}

		file >> curr;
	}

	if (min_2 * min_1 < max_1 * max_2) file_out << max_2 << " " << max_1;
	else file_out << min_2 << " " << min_1;

	file.close();
	file_out.close();

	return 0;
}