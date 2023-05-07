#include <iostream>
#include <fstream>

int main() {
	long long prev, curr;
	bool answer = true;

	std::fstream file("input.txt");
	std::fstream file_out("output.txt");

	file >> prev;

	while (file) {
		file >> curr;

		if (curr > prev) {
			prev = curr;
			file >> curr;
		}
		else {
			answer = false;
			break;
		}
	}

	if (answer) file_out << "YES";
	else file_out << "NO";

	file.close();
	file_out.close();

	return 0;
}