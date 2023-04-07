#include <iostream>
#include <string>

void toFormat(std::string& str) {
    std::string new_str;

    for (size_t i = 0; i < str.size(); ++i) {
        if ((str[i] >= '1' && str[i] <= '9') || (str[i] == '0')) {
            if ((str[i] == '7' && i == 1) && (str[i - 1] == '+')) {
                continue;
            }
            else if (str[i] == '8' && i == 0) {
                continue;
            }
            else {
                new_str += str[i];
            }
        }
    }

    if (new_str.size() < 10) {
        new_str = std::string("495") + new_str;
    }

    str = new_str;
}

bool isEqual(std::string& str_1, std::string& str_2) {
    for (size_t i = 0; i < str_1.size(); ++i) {
        if (str_1[i] != str_2[i]) return false;
    }

    return true;
}

int main()
{
    std::string new_num, num_1, num_2, num_3;

    std::cin >> new_num >> num_1 >> num_2 >> num_3;

    toFormat(new_num);
    toFormat(num_1);
    toFormat(num_2);
    toFormat(num_3);

    std::cout << (isEqual(new_num, num_1) ? "YES" : "NO") << std::endl;
    std::cout << (isEqual(new_num, num_2) ? "YES" : "NO") << std::endl;
    std::cout << (isEqual(new_num, num_3) ? "YES" : "NO") << std::endl;

    return 0;
}