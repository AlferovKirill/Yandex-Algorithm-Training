#include <iostream>
#include <fstream>
#include <algorithm>

int main() {
    std::fstream file("input.txt");
	std::fstream file_out("output.txt");

    long long int curr, a, b, c, min_1, min_2, max_1, max_2, max_3;
    file >> a >> b >> c;

    max_1 = std::max({ a, b, c });
    max_3 = std::min({ a, b, c });
    
    if ((max_1 == a && max_3 == b) || (max_1 == b && max_3 == a)) max_2 = c;
    else if ((max_1 == a && max_3 == c) || (max_1 == c && max_3 == a)) max_2 = b;
    else if ((max_1 == b && max_3 == c) || (max_1 == c && max_3 == b)) max_2 = a;

    min_1 = max_2;
    min_2 = max_3;

    if (file) file >> curr;
    
    while (file) { 
        if (curr > max_1) {
            max_3 = max_2;
            max_2 = max_1;
            max_1 = curr;
        }
        else if (curr > max_2) {
            max_3 = max_2;
            max_2 = curr;
        }
        else if (curr > max_3) {
            max_3 = curr;
        }

        if (curr < min_2) {
            min_1 = min_2;
            min_2 = curr;
        }
        else if (curr < min_1) {
            min_1 = curr;
        }

        file >> curr;
    }

    if (max_1 * min_1 * min_2 > max_1 * max_2 * max_3) {
        max_3 = min_2;
        max_2 = min_1;
    }

    file_out << max_1 << " " << max_2 << " " << max_3;

	file.close();
	file_out.close();
}