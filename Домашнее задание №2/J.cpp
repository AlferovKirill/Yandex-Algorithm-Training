#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

int main() {
    size_t n;
    std::string word;

    long double prev, curr, left = 30, right = 4000;

    std::cin >> n >> prev;

    for (size_t i = 0; i < n - 1; ++i) {
        std::cin >> curr >> word;

        if (word == "closer") {
            if (prev > curr) {
                right = std::max(std::min(curr + (prev - curr) / 2, right), left);
            }
            else if (prev < curr) {
                left = std::min(std::max(curr - (curr - prev) / 2, left), right);
            }
        }
        else if (word == "further") {
            if (prev > curr) {
                left = std::min(std::max(prev - (prev - curr) / 2, left), right);
            }
            else if (prev < curr) {
                right = std::max(std::min(prev + (curr - prev) / 2, right), left);
            }
        }

        prev = curr;
    }

    std::cout << std::setprecision(15) << left << " " << right << std::endl;
}