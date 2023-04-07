#include <iostream> 

int main() {
    int a, b, c, answer;

    std::cin >> a >> b >> c;

    if (c < 0) {
        std::cout << "NO SOLUTION";
        return 0;
    }
    else if (c == 0) {
        if (a == 0 && b == 0) {
            std::cout << "MANY SOLUTIONS";
            return 0;
        }
        else if (a == 0 || ((b % a) != 0)) {
            std::cout << "NO SOLUTION";
            return 0;
        }

        answer = -b / a;

        if (a * answer + b >= 0) {
            std::cout << answer;
        }
        else {
            std::cout << "NO SOLUTION";
        }
    }
    else if (c > 0) {
        if (a == 0 && (c * c - b) == 0) {
            std::cout << "MANY SOLUTIONS";
            return 0;
        }
        else if (a == 0 || (((c * c - b) % a) != 0)) {
            std::cout << "NO SOLUTION";
            return 0;
        }

        answer = (c * c - b) / a;

        if (a * answer + b >= 0) {
            std::cout << answer;
        }
        else {
            std::cout << "NO SOLUTION";
        }
    }

    return 0;
}